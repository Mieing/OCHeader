@class NSArray;

@interface BDXURLUtils : NSObject

@property (copy, nonatomic) NSArray *lynxSchemas;
@property (copy, nonatomic) NSArray *webSchemas;

+ (id)engineTypeWithSchema:(id)a0;
+ (BOOL)isLynxURL:(id)a0;
+ (BOOL)isWebURL:(id)a0;
+ (id)sharedInstance;

- (void)registerSchemaWithLynx:(id)a0 webSchemas:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
