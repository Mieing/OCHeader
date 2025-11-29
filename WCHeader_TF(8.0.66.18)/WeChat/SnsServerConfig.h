@class Rabbit2023Config, Dragon2024Config, SnsVideoOptions, SpringFestivalConfig;

@interface SnsServerConfig : WXPBGeneratedMessage

@property (nonatomic) int postMentionLimit;
@property (nonatomic) int copyAndPasteWordLimit;
@property (nonatomic) int postWithTaLimit;
@property (nonatomic) int tiger2022PostStatus;
@property (nonatomic) int tiger2022LinkStatus;
@property (retain, nonatomic) SnsVideoOptions *videoOptions;
@property (retain, nonatomic) Rabbit2023Config *rabbit2023Config;
@property (nonatomic) int enabledTopList;
@property (nonatomic) int closeJumpToFinder;
@property (nonatomic) int closeJumpToNewLife;
@property (nonatomic) int videoTmplTipsDisabled;
@property (retain, nonatomic) Dragon2024Config *dragon2024Config;
@property (nonatomic) int closeLivePhotoPost;
@property (nonatomic) int closeLivePhotoShow;
@property (nonatomic) int closeVideoAutoPlay;
@property (nonatomic) int closeLivePhotoNewForAndroid;
@property (retain, nonatomic) SpringFestivalConfig *springFestivalConfig;
@property (nonatomic) int closeUhdimage;
@property (nonatomic) int closeHdvideo;
@property (nonatomic) int openCheckClearMultiSpecErrVideo;

+ (void)initialize;

- (void)setOpenCheckClearMultiSpecErrVideo:(int)a0;
- (int)openCheckClearMultiSpecErrVideo;
- (void)setCloseHdvideo:(int)a0;
- (int)closeHdvideo;
- (void)setCloseUhdimage:(int)a0;
- (int)closeUhdimage;
- (void)setSpringFestivalConfig:(id)a0;
- (id)springFestivalConfig;
- (void)setCloseLivePhotoNewForAndroid:(int)a0;
- (int)closeLivePhotoNewForAndroid;
- (void)setCloseVideoAutoPlay:(int)a0;
- (int)closeVideoAutoPlay;
- (void)setCloseLivePhotoShow:(int)a0;
- (int)closeLivePhotoShow;
- (void)setCloseLivePhotoPost:(int)a0;
- (int)closeLivePhotoPost;
- (void)setDragon2024Config:(id)a0;
- (id)dragon2024Config;
- (void)setVideoTmplTipsDisabled:(int)a0;
- (int)videoTmplTipsDisabled;
- (void)setCloseJumpToNewLife:(int)a0;
- (int)closeJumpToNewLife;
- (void)setCloseJumpToFinder:(int)a0;
- (int)closeJumpToFinder;
- (void)setEnabledTopList:(int)a0;
- (int)enabledTopList;
- (void)setRabbit2023Config:(id)a0;
- (id)rabbit2023Config;
- (void)setVideoOptions:(id)a0;
- (id)videoOptions;
- (void)setTiger2022LinkStatus:(int)a0;
- (int)tiger2022LinkStatus;
- (void)setTiger2022PostStatus:(int)a0;
- (int)tiger2022PostStatus;
- (void)setPostWithTaLimit:(int)a0;
- (int)postWithTaLimit;
- (void)setCopyAndPasteWordLimit:(int)a0;
- (int)copyAndPasteWordLimit;
- (void)setPostMentionLimit:(int)a0;
- (int)postMentionLimit;

@end
