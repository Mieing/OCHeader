@class UIImageView, AWEMusicAnchorModel, AWEGradientView, UIView, UILabel;

@interface AWEFeedMeetMusicView : UIView

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEMusicAnchorModel *anchor;
@property (nonatomic) BOOL isFolded;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;

- (void)startFoldAnimationWithCompletion:(id /* block */)a0;
- (void)updateAnchor:(id)a0;
- (id)initWithIsFolded:(BOOL)a0;
- (void)updateFoldStateUI;
- (void).cxx_destruct;
- (void)setup;

@end
