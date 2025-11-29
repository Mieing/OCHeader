@class UIScrollView, GCMultiMessageViewModel, NSString, UIView, NSMutableArray, GCChannelTitleView;

@interface GCMultiChannelContainerView : UIView <GCChannelTitleDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) GCChannelTitleView *channelTitleView;
@property (weak, nonatomic) GCMultiMessageViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *msgViewModelConfigArray;
@property (retain, nonatomic) UIView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)initTitleView:(id)a0;
- (void)setSelectedIndex:(unsigned long long)a0;
- (void)onChangeToIndex:(unsigned long long)a0;
- (void)relayoutViewWhenSizeChange;
- (void)dealloc;
- (void)didSelectChannelAtIndex:(unsigned long long)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)handleScrollViewEnd:(id)a0;
- (void)initScrollView:(id)a0;
- (void).cxx_destruct;

@end
