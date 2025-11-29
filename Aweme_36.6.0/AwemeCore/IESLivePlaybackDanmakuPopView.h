@class IESLivePlaybackDanmakuPopDanmakuView, UIView;
@protocol IESLivePlaybackDanmakuPopableViewProtocol;

@interface IESLivePlaybackDanmakuPopView : UIView

@property (retain, nonatomic) UIView *danmakuContentView;
@property (retain, nonatomic) IESLivePlaybackDanmakuPopDanmakuView *popDanmakuView;
@property (readonly, nonatomic) UIView<IESLivePlaybackDanmakuPopableViewProtocol> *relatedDanmakuView;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)didSetAttachingDIContext;
- (id)initWithSuperView:(id)a0 danmakuContentView:(id)a1 relatedDanmakuView:(id)a2;
- (void)refreshWithNode:(id)a0;
- (void)showPopWithMenu;
- (void)setupUIWithSuperView:(id)a0;
- (void).cxx_destruct;

@end
