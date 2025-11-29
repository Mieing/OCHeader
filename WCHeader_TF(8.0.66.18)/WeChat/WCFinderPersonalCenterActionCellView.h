@class NSString, WCFinderPersonalCenterSidesButton;

@interface WCFinderPersonalCenterActionCellView : UICollectionViewCell <WCFinderPersonalCenterCellProtocol>

@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupCorner:(unsigned long long)a0 cornerRadii:(double)a1;
- (void)updateTitle:(id)a0;
- (void)updateWithCellPosition:(BOOL)a0 tail:(BOOL)a1;
- (void)handleClick;
- (void)setRedDotInfo:(id)a0;
- (void).cxx_destruct;

@end
