@class UILabel, JumpInfo, MMWebImageView;

@interface GCRecommendTagView : UIView

@property (retain, nonatomic) MMWebImageView *imgView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) JumpInfo *jumpInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTap;
- (void)configureWithChatroomTagInfo:(id)a0 layout:(id)a1;
- (void).cxx_destruct;

@end
