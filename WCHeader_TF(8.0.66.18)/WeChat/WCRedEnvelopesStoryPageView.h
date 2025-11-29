@class UIImageView, WCPlayerHttpMediaWrap, WCPayWebImageView, UILabel, WCPlayerConfigControlView, RedPacketStoryInfo_StoryDetail, WCRedEnvelopesReceiveHomeTemplateView, UIButton, RedPacketStoryInfo_WxappInfo, NSString, WCRedEnvelopesReceiveHomeTemplateItem, WCPlayerPlayArgs, WCPlayerView, WCPlayerPlaybackInfo;
@protocol WCRedEnvelopesStoryPageViewDelegate;

@interface WCRedEnvelopesStoryPageView : UIView <WCPlayerConfigDelegate, WCPlayerDownloaderExt, WCPlayerConfigDelegate, WCPayWebImageViewDelegate, WCRedEnvelopesReceiveHomeTemplateViewDelegate>

@property (retain, nonatomic) WCPlayerView *m_storyPlayerView;
@property (retain, nonatomic) WCPayWebImageView *firstFrameImageView;
@property (retain, nonatomic) WCPlayerPlayArgs *m_storyPlayerInfo;
@property (retain, nonatomic) WCPlayerHttpMediaWrap *m_storyMediaWrap;
@property (retain, nonatomic) WCPlayerConfigControlView *m_storyControlView;
@property (retain, nonatomic) UIButton *m_mutedBtn;
@property (nonatomic) BOOL isMutedNow;
@property (nonatomic) BOOL isPortrait;
@property (retain, nonatomic) UIButton *m_videoMutedBtn;
@property (retain, nonatomic) UIImageView *storyPageLoadingView;
@property (nonatomic) unsigned int subtypeId;
@property (nonatomic) long long resourceIndex;
@property (nonatomic) BOOL isLoopPlay;
@property (weak, nonatomic) id<WCRedEnvelopesStoryPageViewDelegate> m_delegate;
@property (retain, nonatomic) WCPlayerPlaybackInfo *m_storyPlayerReporter;
@property (nonatomic) double m_lastStopTime;
@property (nonatomic) unsigned int m_loopCount;
@property (retain, nonatomic) RedPacketStoryInfo_StoryDetail *m_storyDetail;
@property (retain, nonatomic) RedPacketStoryInfo_WxappInfo *m_wxAppInfo;
@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) NSString *nsDesc;
@property (retain, nonatomic) NSString *m_nsUrl;
@property (nonatomic) BOOL isPageOne;
@property (retain, nonatomic) WCPayWebImageView *m_backgroundBlurView;
@property (retain, nonatomic) UIButton *getSameCoverEntryBtn;
@property (retain, nonatomic) WCPayWebImageView *m_contentView;
@property (nonatomic) unsigned long long m_viewStyle;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *m_redSkinView;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *m_redSkinItem;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_descLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void)resumePaying;
- (void)resumePaying:(BOOL)a0;
- (void)stopPlaying;
- (id)createMediaWrapFromURL:(id)a0;
- (id)createPlayerConfig;
- (void)layoutSubviews;
- (void)updateViews;
- (void)setImageUrl:(id)a0;
- (void)setDefaultImage:(id)a0;
- (BOOL)isNotchScreen;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void)onLoadWCPayWebImageFail:(id)a0;
- (id)createPlayerInfoFromMediaWrap:(id)a0;
- (void)onVideoPlay;
- (id)getSameCoverButtonView;
- (void)onClickGetSameRedSkinEntryBtn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withStoryDetail:(id)a1 subtypeId:(unsigned int)a2 index:(long long)a3 wxAppInfo:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withStoryDetail:(id)a1 subtypeId:(unsigned int)a2 index:(long long)a3;
- (void)onLoopPlayToEnd;
- (void)onTapSightIconView;
- (void)onTapMutaBtn;
- (void)setMuteBtn:(BOOL)a0;
- (void).cxx_destruct;

@end
