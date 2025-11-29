@interface WebPageLangIdentifierUtil : NSObject

+ (float)identifyLanguageRatioBySampleArray:(id)a0 ignoreTraditionCN:(BOOL)a1 wholeLength:(BOOL *)a2;
+ (BOOL)isStringLegal:(id)a0;
+ (id)clearArray:(id)a0;
+ (id)squeezeArray:(id)a0 cellLength:(unsigned long long)a1;
+ (id)sortAndCutArray:(id)a0 cutLength:(unsigned long long)a1;

@end
