@class BaseResponse, NSString, NSMutableArray, SugResult;

@interface PardusSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) SugResult *sugResult;
@property (retain, nonatomic) NSMutableArray *businessResults;
@property (retain, nonatomic) NSString *moreText;
@property (retain, nonatomic) NSString *guideText;
@property (retain, nonatomic) NSString *pardusInfo;
@property (retain, nonatomic) SugResult *relatedResult;
@property (retain, nonatomic) NSString *jsonResult;

+ (void)initialize;

@end
