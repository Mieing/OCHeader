@class NSString, AWEURLModel;

@interface AWEIMUserBubbleResourceModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *bubbleLightURL;
@property (retain, nonatomic) AWEURLModel *bubbleDarkURL;
@property (retain, nonatomic) AWEURLModel *selfBubbleLightURL;
@property (retain, nonatomic) AWEURLModel *selfBubbleDarkURL;
@property (copy, nonatomic) NSString *resourceConfig;
@property (nonatomic) long long version;
@property (retain, nonatomic) AWEURLModel *bubbleAnimationSourceURL;
@property (retain, nonatomic) AWEURLModel *selfBubbleAnimationSourceURL;
@property (retain, nonatomic) AWEURLModel *animationSourceURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleLightURLJSONTransformer;
+ (id)bubbleDarkURLJSONTransformer;
+ (id)selfBubbleLightURLJSONTransformer;
+ (id)selfBubbleDarkURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
