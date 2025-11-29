@class NSString;

@interface AWEPostPageVideoCutShareIdInfoEffectInfo : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSString *effectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpConfirmModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
