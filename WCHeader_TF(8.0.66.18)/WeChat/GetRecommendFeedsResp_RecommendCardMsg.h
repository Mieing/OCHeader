@class NSString, NSMutableArray, GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg;

@interface GetRecommendFeedsResp_RecommendCardMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSMutableArray *recommendItem;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int styleFlag;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSMutableArray *negativeFeedbackReason;
@property (retain, nonatomic) NSString *aggregationTitle;
@property (retain, nonatomic) NSString *aggregationUrl;
@property (retain, nonatomic) NSString *recommendWording;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg *recommendTag;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSMutableArray *friendSeenHeadImgUrl;
@property (retain, nonatomic) NSString *canvasBuffer;
@property (nonatomic) unsigned int separateStyle;
@property (retain, nonatomic) NSString *negativeFeedbackTitle;
@property (nonatomic) BOOL isSupply;

+ (void)initialize;

@end
