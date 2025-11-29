@class FinderPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderStreamRerankResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *rerankLastBuffer;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;

+ (void)initialize;

@end
