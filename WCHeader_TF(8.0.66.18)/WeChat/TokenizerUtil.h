@interface TokenizerUtil : NSObject

+ (id)getUnicodeNormalizationForms:(id)a0;
+ (id)getKeywordsForString:(id)a0;
+ (id)getKeywordsForString:(id)a0 skipStemming:(BOOL)a1;
+ (id)generateFTS5BinaryTokenizeString:(id)a0;
+ (id)genPinyinQuaryFrom:(id)a0;
+ (id)escapeSymbolsFrom:(id)a0;

@end
