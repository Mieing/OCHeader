@class MusicLiveMsgText, MusicLiveMsgLocation;

@interface MusicLiveMsg : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MusicLiveMsgText *text;
@property (retain, nonatomic) MusicLiveMsgLocation *location;

+ (void)initialize;

@end
