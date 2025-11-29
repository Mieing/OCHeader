@class NSString, AWEUGLiveActivityGuideConfig;

@interface AWEUGLiveActivityInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;
@property (retain, nonatomic) AWEUGLiveActivityGuideConfig *guideConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
