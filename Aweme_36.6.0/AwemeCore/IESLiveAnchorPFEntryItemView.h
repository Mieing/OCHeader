@class IESLiveAnchorPFEntryItem, UIImageView;

@interface IESLiveAnchorPFEntryItemView : UIView

@property (retain, nonatomic) IESLiveAnchorPFEntryItem *entryItem;
@property (retain, nonatomic) UIImageView *imageView;

- (void)updateUIWithEntryItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
