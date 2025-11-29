@class NSData, NSMutableArray, BaseResponse;

@interface SprMiaoJianBgmSearchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *musicList;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSData *pageCtx;

+ (void)initialize;

@end
