@class IESLiveAudioAvatarView, NSString, UIImageView, UIView, UILabel;
@protocol IESLiveGuideAudioBackgroundViewDataSource;

@interface IESLiveGuideAudioEFTBackgroundView : UIView <IESLiveGuideAudioBackgroundViewProtocol>

@property (weak, nonatomic) id<IESLiveGuideAudioBackgroundViewDataSource> dataSouce;
@property (retain, nonatomic) UIView *safeBackgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) IESLiveAudioAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *briefContentView;
@property (retain, nonatomic) UILabel *introLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)relayoutSceneBackgroundViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 diContext:(id)a2;
- (void).cxx_destruct;
- (void)setupViews;

@end
