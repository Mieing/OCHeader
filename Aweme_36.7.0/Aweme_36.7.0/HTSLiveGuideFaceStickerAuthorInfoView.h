@class UILabel, IESLiveImageView;

@interface HTSLiveGuideFaceStickerAuthorInfoView : UIView

@property (retain, nonatomic) UILabel *createdByLabel;
@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (retain, nonatomic) UILabel *creatorNameLabel;

- (void)updateWithUserModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
