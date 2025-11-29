@class NSString;

@interface AWENeabyGrouponAsyncUpdateModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *apiParams;
@property (copy, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
