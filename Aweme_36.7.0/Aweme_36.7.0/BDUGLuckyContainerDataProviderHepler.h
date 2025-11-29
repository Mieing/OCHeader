@class NSDictionary;

@interface BDUGLuckyContainerDataProviderHepler : NSObject

@property (copy, nonatomic) NSDictionary *globalPropsDataDict;
@property (retain, nonatomic) Class schemaClass;

+ (id)sharedInstance;

- (void)updateGlobalPropsWithURLString:(id)a0 Context:(id)a1 schemaClass:(Class)a2;
- (id)fetchGlobalPropsWithOriginURL:(id)a0;
- (Class)BDUGLuckyContainerSchemaClass;
- (void).cxx_destruct;

@end
