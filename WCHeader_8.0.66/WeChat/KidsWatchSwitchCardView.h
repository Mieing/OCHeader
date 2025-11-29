@class MMUILabel, NSString, NSArray, NSMutableArray, MMHeadImageView;

@interface KidsWatchSwitchCardView : UIView <KidsWatchSwitchCellViewDelegate>

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *cellViews;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTapCellView:(id)a0;
- (void).cxx_destruct;

@end
