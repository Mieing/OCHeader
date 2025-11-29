@class UIView, CommonLiveTabGuideData, NSString, UILabel, IESLiveNewAudienceFinishGuideAvatarView, UIButton;
@protocol IESLivePlayerProtocol;

@interface IESLiveNewAudienceFinishGuidePlayerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) IESLiveNewAudienceFinishGuideAvatarView *avatarView;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) CommonLiveTabGuideData *model;
@property (copy, nonatomic) id /* block */ onClick;
@property (copy, nonatomic) id /* block */ onFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)configModel:(id)a0;
- (void)buttonClick:(id)a0;
- (void)stopPlayPreview;
- (void).cxx_destruct;
- (void)pause;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)dealloc;
- (void)setupViews;
- (void)addObservers;
- (void)tapAction;

@end
