@class AWENearbySwitchChannelItemView;

@interface AWENearbySwitchChannelIconCell : UICollectionViewCell

@property (retain, nonatomic) AWENearbySwitchChannelItemView *itemView;

- (void)updateTitle:(id)a0 textColor:(id)a1 backgroundColor:(id)a2 leftIcon:(id)a3 rightIcon:(id)a4 feedType:(long long)a5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
