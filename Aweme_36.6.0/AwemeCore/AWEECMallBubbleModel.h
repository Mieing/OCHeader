@class NSString, NSDictionary, AWEECMallBubbleIcon, NSDate, NSArray;

@interface AWEECMallBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDate *beginShowingTime;
@property (nonatomic) BOOL hasBubbleUnderTaked;
@property (copy, nonatomic) NSString *localUniqID;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *msgUniqId;
@property (copy, nonatomic) NSString *skipUrl;
@property (copy, nonatomic) NSString *triggerSource;
@property (copy, nonatomic) NSString *strongEffectSkipUrl;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) double msgShowStartTime;
@property (nonatomic) double msgShowEndTime;
@property (nonatomic) long long maxShowTimes;
@property (nonatomic) long long everyDayShowTimes;
@property (nonatomic) long long msgType;
@property (nonatomic) long long msgSubType;
@property (nonatomic) long long msgShowType;
@property (nonatomic) long long showSeconds;
@property (nonatomic) BOOL isCompensation;
@property (nonatomic) BOOL isLeaveMallCompensation;
@property (nonatomic) unsigned long long dataStage;
@property (copy, nonatomic) NSString *bizSource;
@property (retain, nonatomic) AWEECMallBubbleIcon *bubbleIcon;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isOtherChannel;
@property (nonatomic) BOOL needShowRetDot;
@property (nonatomic) BOOL isShowingRetDot;
@property (copy, nonatomic) NSDictionary *bizInfo;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *launchActId;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) long long bubbleEntranceType;
@property (copy, nonatomic) NSString *cornerId;
@property (copy, nonatomic) NSArray *registerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bubbleComponentID;
- (id)redDotComponentID;
- (id)textBadgeComponentID;
- (BOOL)isTextBadgeMsg;
- (void).cxx_destruct;

@end
