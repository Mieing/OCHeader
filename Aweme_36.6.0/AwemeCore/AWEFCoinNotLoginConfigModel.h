@class NSString;

@interface AWEFCoinNotLoginConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long nextCycleTime;
@property (nonatomic) long long pendentBubbleFreq;
@property (nonatomic) BOOL loginPanelAtmoEnable;
@property (nonatomic) BOOL pendentEnable;
@property (nonatomic) long long pendentBubbleDuration;
@property (copy, nonatomic) NSString *addWhiteFailToast;
@property (copy, nonatomic) NSString *pendantBubbleTitle;
@property (copy, nonatomic) NSString *pendantBubbleSubtitle;
@property (copy, nonatomic) NSString *loginBubbleTitle;
@property (copy, nonatomic) NSString *loginBubbleSubtitle;
@property (nonatomic) long long pendentBubbleDailyFreq;
@property (copy, nonatomic) NSString *pendentWaitText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
