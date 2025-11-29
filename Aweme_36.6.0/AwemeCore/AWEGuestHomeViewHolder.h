@class IESSegmentedControl;

@interface AWEGuestHomeViewHolder : AWEBaseListViewHolder

@property (weak, nonatomic) IESSegmentedControl *segmentedControl;

- (void)setupViewHolder;
- (void)updateSegmentedControl:(id)a0;
- (void)updateSegmentedControlLayout;
- (void)updateLayout;
- (void).cxx_destruct;

@end
