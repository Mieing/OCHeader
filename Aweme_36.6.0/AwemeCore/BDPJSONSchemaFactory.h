@class NSDictionary, NSURL, BDPJSONSchemaSpecification, BDPJSONSchemaValidationOptions;

@interface BDPJSONSchemaFactory : NSObject

@property (readonly, nonatomic) NSURL *scopeURI;
@property (readonly, copy, nonatomic) NSDictionary *keywordsMapping;
@property (readonly, nonatomic) BDPJSONSchemaSpecification *specification;
@property (readonly, nonatomic) BDPJSONSchemaValidationOptions *options;

+ (id)factoryWithScopeURI:(id)a0 keywordsMapping:(id)a1 specification:(id)a2 options:(id)a3;
+ (id)schemaReferenceURIWithJSONReference:(id)a0 scope:(id)a1;
+ (id)alteredResolutionScopeURIWithJSONAlteration:(id)a0 currentScope:(id)a1;

- (id)schemaWithObject:(id)a0 error:(id *)a1;
- (id)factoryByAppendingScopeComponent:(id)a0;
- (id)factoryByAppendingScopeComponentsFromArray:(id)a0;
- (id)initWithScopeURI:(id)a0 keywordsMapping:(id)a1 specification:(id)a2 options:(id)a3;
- (id)unboundSubschemasFromDictionary:(id)a0 remainingKeys:(id)a1;
- (id)factoryByReplacingScopeURI:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
