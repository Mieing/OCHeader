@class NSMutableArray, BaseResponse;

@interface MusicLiveSearchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
