@class AWESearchAutoPlayHandler, NSString, AWESearchLifeSeparatorAreaView, UIView;

@interface AWESearchCachalotGroupBuyContainerView : UIView <AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) AWESearchLifeSeparatorAreaView *injectBottomView;
@property (retain, nonatomic) AWESearchLifeSeparatorAreaView *injectTopView;
@property (nonatomic) double topSeparatorAreaHeight;
@property (nonatomic) double bottomSeparatorAreaHeight;
@property (retain, nonatomic) id bridgeComponent;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldNotActive;
- (BOOL)isMediaSourceCard;
- (id)lynxEngine;
- (void)setScrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)createUIWithViewDelegate:(id)a0 viewModel:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewDelegate:(id)a1 viewModel:(id)a2;
- (void)reloadWithViewModel:(id)a0 viewDelegate:(id)a1;
- (void)clearViewsInContainerView;
- (void)creatSeparatorAreaViewWithViewModel:(id)a0;
- (double)separatorAreaHeightWithDividerConfig:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;

@end
