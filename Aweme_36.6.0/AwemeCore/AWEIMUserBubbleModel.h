@class NSString, AWEIMUserBubblePossessionModel, AWEIMUserBubbleResourceModel;

@interface AWEIMUserBubbleModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) long long bubbleID;
@property (retain, nonatomic) NSString *bubbleName;
@property (retain, nonatomic) AWEIMUserBubbleResourceModel *resource;
@property (retain, nonatomic) AWEIMUserBubblePossessionModel *possessionInfo;
@property (nonatomic) unsigned long long resourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceJSONTransformer;
+ (id)possessionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
