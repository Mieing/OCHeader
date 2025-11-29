@class NSMutableArray, BaseResponse;

@interface SyncWxagGameListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *gameList;
@property (nonatomic) BOOL remaining;
@property (nonatomic) unsigned int nextOffSet;

+ (void)initialize;

@end
