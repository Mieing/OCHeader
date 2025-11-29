@class UIImageView, UILabel;

@interface AWEFeedBulletPatchPoiGuideAnchorView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *closeImageView;

- (void)updateInfoText:(id)a0 actionText:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
