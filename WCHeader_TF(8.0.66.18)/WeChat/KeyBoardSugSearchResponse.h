@class NSString, SugResult, BaseResponse;

@interface KeyBoardSugSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) SugResult *sugResult;

+ (void)initialize;

@end
