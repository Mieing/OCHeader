@class NSString, NSArray;

@interface BDUGFlowStatisticsResponseModel : BDUGFlowBasicModel

@property (nonatomic) BOOL isOrderFlow;
@property (nonatomic) long long orderType;
@property (nonatomic) double flow;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long cacheTime;
@property (nonatomic) long long currentTime;
@property (nonatomic) BOOL isSupport;
@property (copy, nonatomic) NSString *orderFlowButton;
@property (copy, nonatomic) NSString *orderFlowButtonStyle;
@property (copy, nonatomic) NSString *flowReminderMsg;
@property (copy, nonatomic) NSString *flowReminderMsgColor;
@property (copy, nonatomic) NSString *continuePlayButton;
@property (copy, nonatomic) NSString *continuePlayButtonStyle;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL showPopup;
@property (nonatomic) long long noPopupDuration;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) BOOL showFreeflowToast;
@property (copy, nonatomic) NSString *freeflowToastMsg;
@property (nonatomic) long long noToastDuration;
@property (copy, nonatomic) NSArray *experiments;
@property (copy, nonatomic) NSString *orderFlowUrl;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
