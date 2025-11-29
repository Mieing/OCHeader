@class NSMutableArray, BaseResponse;

@interface GetPinTopFavInChatResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *favId;

+ (void)initialize;

@end
