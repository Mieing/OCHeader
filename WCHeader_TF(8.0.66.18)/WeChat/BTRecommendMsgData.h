@class NSString, NSArray, BTRecommendFeedbackInfo, BTRecommendAccountData, BTRecommendFinderDataWrapper;

@interface BTRecommendMsgData : NSObject

@property (copy, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSArray *arrAccountData;
@property (retain, nonatomic) BTRecommendFeedbackInfo *feedBackInfo;
@property (nonatomic) int weight;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int pos;
@property (copy, nonatomic) NSString *versonInfo;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long recId;
@property (nonatomic) int style;
@property (retain, nonatomic) NSString *recSummary;
@property (retain, nonatomic) NSString *recReason;
@property (retain, nonatomic) NSString *aggregationUrl;
@property (retain, nonatomic) NSString *aggregationTitle;
@property (nonatomic) unsigned int topRightShowMode;
@property (nonatomic) BOOL shouldCheckSubscription;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *exptType;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) BTRecommendFinderDataWrapper *finderDataWrapper;
@property (readonly, nonatomic) BTRecommendAccountData *firstAccountData;

- (void).cxx_destruct;

@end
