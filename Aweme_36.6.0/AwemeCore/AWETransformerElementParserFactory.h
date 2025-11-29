@interface AWETransformerElementParserFactory : NSObject

+ (id)parseDSLJSONObject:(id)a0 globalParams:(id)a1;
+ (id)parseCardDSLJSONObject:(id)a0;

- (id)__parseRootElementWithDictionary:(id)a0 globalParams:(id)a1;
- (id)__mergeTemplate:(id)a0 withData:(id)a1;
- (id)__parserElementWithTemplate:(id)a0 elementID:(id)a1 globalParams:(id)a2 isRootElement:(BOOL)a3 cardRootElement:(id)a4 isCardRootElement:(BOOL)a5;
- (id)__parseElementWithDictionary:(id)a0 globalParams:(id)a1;
- (id)__createElementWithType:(id)a0;
- (id)__parserWithType:(id)a0;
- (id)__mergeDictionary:(id)a0 another:(id)a1;

@end
