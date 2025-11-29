@class NSMutableArray, BaseResponse;

@interface MusicLiveGetBeatTrackResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *breakPointMs;
@property (retain, nonatomic) NSMutableArray *flexBreakPointMs;

+ (void)initialize;

@end
