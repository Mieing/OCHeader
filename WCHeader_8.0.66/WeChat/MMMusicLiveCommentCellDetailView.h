@class UILabel, NSString;

@interface MMMusicLiveCommentCellDetailView : UIView

@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *name;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
