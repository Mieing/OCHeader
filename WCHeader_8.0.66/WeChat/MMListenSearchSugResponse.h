@class NSString, NSMutableArray, BaseResponse;

@interface MMListenSearchSugResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *words;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *sugId;
@property (retain, nonatomic) NSString *listenInfo;
@property (retain, nonatomic) NSString *searchInfo;

+ (void)initialize;

@end
