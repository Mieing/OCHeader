@class NSString;

@interface AWEFeedFlameAnchorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *tagMsg;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long rewardShowDelay;
@property (copy, nonatomic) NSString *publishButtonText;
@property (nonatomic) long long landingStrategy;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
