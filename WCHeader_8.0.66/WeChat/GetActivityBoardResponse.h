@class FinderEventBaseResponse, ActivityBoardItem, ActivityBoardConfig, NSData, NSMutableArray, ActivityPageTemplate;

@interface GetActivityBoardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (retain, nonatomic) NSMutableArray *boardItems;
@property (retain, nonatomic) ActivityBoardItem *selfItem;
@property (retain, nonatomic) ActivityPageTemplate *msgTempalte;
@property (nonatomic) BOOL selfBlurredDisplayFlag;
@property (nonatomic) BOOL selfSignupFlag;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastCtx;
@property (retain, nonatomic) ActivityBoardConfig *staticConfig;

+ (void)initialize;

@end
