@class NewLifeSelectMusicInfo;

@interface NewLifePostMusicPanelResp : WXPBGeneratedMessage

@property (nonatomic) BOOL useMusic;
@property (retain, nonatomic) NewLifeSelectMusicInfo *selectedMusic;

+ (void)initialize;

@end
