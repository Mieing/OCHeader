@class NSNumber, NSString, AWELiveInnerPushContentModel;

@interface AWELiveCommonInnerPushModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWELiveInnerPushContentModel *contentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)transFormToGuideModel;
- (void).cxx_destruct;

@end
