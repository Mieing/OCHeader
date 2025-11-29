@class UIImageView, IESLiveBacktrackProgressView;
@protocol IESLiveAnchorBacktrackPreferenceService;

@interface IESLiveBacktrackItemView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *littleImageView;
@property (retain, nonatomic) IESLiveBacktrackProgressView *progressView;
@property (retain, nonatomic) id<IESLiveAnchorBacktrackPreferenceService> backtrackPreference;
@property (nonatomic) unsigned long long backtrackStatus;

- (void)setupSubViews;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
