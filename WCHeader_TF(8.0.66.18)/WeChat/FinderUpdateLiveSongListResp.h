@class NSMutableArray, BaseResponse;

@interface FinderUpdateLiveSongListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *blockSongNames;
@property (retain, nonatomic) NSMutableArray *songInfos;

+ (void)initialize;

@end
