@class MMUIView, MMUILabel;

@interface GameCenterMsgSectionView : UITableViewHeaderFooterView

@property (retain, nonatomic) MMUIView *lineLeft;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUIView *lineRight;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setupGameCenterMsgSectionView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
