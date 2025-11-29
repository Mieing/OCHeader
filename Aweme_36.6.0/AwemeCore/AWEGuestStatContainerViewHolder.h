@class UIButton, DUXDivider, IESSegmentedControl;

@interface AWEGuestStatContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) UIButton *naviBackButton;
@property (retain, nonatomic) DUXDivider *naviDivider;
@property (weak, nonatomic) IESSegmentedControl *segmentedControl;

- (void)setupViewHolder;
- (void)updateSegmentedControl:(id)a0;
- (void)updateSegmentedControlLayout;
- (void)updateDividerLayout;
- (void)updateLayout;
- (void).cxx_destruct;

@end
