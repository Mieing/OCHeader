@class MusicLiveSearchRespInfoDetail;

@interface MusicLiveSearchRespInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) MusicLiveSearchRespInfoDetail *detail;

+ (void)initialize;

@end
