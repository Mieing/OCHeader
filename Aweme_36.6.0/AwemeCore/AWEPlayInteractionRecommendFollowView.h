@class AWEUIListCellActionButtonColorModel, AWEButton, DUXButton;

@interface AWEPlayInteractionRecommendFollowView : UIStackView

@property (retain, nonatomic) AWEUIListCellActionButtonColorModel *colorModel;
@property (retain, nonatomic) AWEButton *uninterestBtn;
@property (retain, nonatomic) DUXButton *followBtn;

- (void)buildUI;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)updateFollowButtonActiveStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
