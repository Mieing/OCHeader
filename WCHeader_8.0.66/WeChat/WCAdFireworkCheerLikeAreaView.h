@class WCDataItem, WCAdSocialLikeLogic, WCAdFireworkCheerInfo, PAGView, MMUIView, NSString, WCAdURLImageView;

@interface WCAdFireworkCheerLikeAreaView : MMUIView <IWCAdSocialLikeLogicExt>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdURLImageView *backgroundImageView;
@property (retain, nonatomic) PAGView *topPagView;
@property (retain, nonatomic) MMUIView *topContentView;
@property (readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
@property (nonatomic) BOOL contentShowFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)topAreaHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fireworkCheerInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)dealloc;
- (void)initView;
- (void)initBackgroundImageView;
- (void)initTopPagView;
- (void)initTopContentView;
- (double)topContentViewOriginY;
- (void)showContent;
- (void)startShowContentAnimation;
- (void)tryToPlayTopPag;
- (void)tryToStopTopPag;
- (void)realStopTopPag;
- (void)onFireworkCheerCommentAnimationStarted:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)onMainMediaPlayStateChanged:(id)a0 contentItemScene:(unsigned long long)a1 isPlaying:(BOOL)a2;
- (void).cxx_destruct;

@end
