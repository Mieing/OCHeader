@class LOTAnimationView, UILabel;

@interface AWETeenAlbumGuideFullScreenView : UIView

@property (retain, nonatomic) LOTAnimationView *pointView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL isDismissing;

- (void)p_setupUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)dismissSelf;

@end
