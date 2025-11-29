@interface AWEPOICubeAdapter : NSObject

@property (retain, nonatomic) Class poiLynxNativeModule;
@property (copy, nonatomic) id /* block */ bizGlobalPropsWithSchemaBlock;
@property (copy, nonatomic) id /* block */ schemaInterceptorBlock;
@property (copy, nonatomic) id /* block */ fetchUniqueKeyBlock;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
