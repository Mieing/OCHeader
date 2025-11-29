@class UILabel, NSString, UIView;

@interface WCFinderFlowDividerLineWordLineCell : UICollectionReusableView

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

+ (struct CGSize { double x0; double x1; })dispalySize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_doLayout;
- (void).cxx_destruct;

@end
