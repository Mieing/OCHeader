@class NSString, AWEHomePageTabTextConfigModel;

@interface AWEHomePageTabUIConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHomePageTabTextConfigModel *topTabTextConfigModel;
@property (retain, nonatomic) AWEHomePageTabTextConfigModel *bottomTabTextConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
