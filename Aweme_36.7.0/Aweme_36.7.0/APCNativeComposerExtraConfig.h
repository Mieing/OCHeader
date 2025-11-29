@class NSDictionary, NSString;

@interface APCNativeComposerExtraConfig : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *createAwemeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)appendCreateAwemeParams:(id)a0;
- (void).cxx_destruct;

@end
