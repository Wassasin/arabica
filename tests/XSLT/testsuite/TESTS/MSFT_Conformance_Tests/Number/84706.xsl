<?xml version="1.0"?> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:output method="xml" omit-xml-declaration="yes" />

<!-- XSLT: Number formatting XSLT - invalid letter-value - != "alphabetic" && "traditional" -->
<!-- Created : Khalil Jabrane -->
<!-- Date: 04/05/2000 -->

<xsl:template match="/">  
	<TABLE>  
		<xsl:for-each select="//chapter">  
			<TR><TD>  
				<TD>
					<xsl:number format="&#x0061;" letter-value="alphabetics" /> -
					<xsl:value-of select = "text()"/>										
				</TD>
			</TD></TR>  
		</xsl:for-each>  
	</TABLE>  
</xsl:template>  

</xsl:stylesheet>  
