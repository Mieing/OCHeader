@class NSMutableArray, BaseResponse;

@interface FinderLiveBatchGetMusicInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *musicList;

+ (void)initialize;

@end
