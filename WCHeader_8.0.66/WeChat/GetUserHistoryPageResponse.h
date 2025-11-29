@class NSMutableArray, BaseResponse;

@interface GetUserHistoryPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *dailySportList;

+ (void)initialize;

@end
