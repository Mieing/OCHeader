@class IESGCPSegmentSlideSwitcherConfig, UIView, NSMutableArray, UIScrollView;
@protocol IESGCPSegmentSlideSwitcherViewDelegate;

@interface IESGCPSegmentSlideSwitcherView : UIView

@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) NSMutableArray *titleButtons;
@property (retain, nonatomic) IESGCPSegmentSlideSwitcherConfig *config;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIView *gradientView;
@property (nonatomic) double tabStartStay;
@property (nonatomic) double tabWatchDuration;
@property (nonatomic) long long trackerSelectedIndex;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long count;
@property (nonatomic) long long defaultSelectedIndex;
@property (readonly, nonatomic) BOOL isAttachment;
@property (nonatomic) BOOL isBackToTop;
@property (weak, nonatomic) id<IESGCPSegmentSlideSwitcherViewDelegate> delegate;

- (void)updateSelectedIndex;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1 isManual:(BOOL)a2;
- (void)reportDetailTabStayDurationWithNewIndex:(long long)a0;
- (id)tabViewForIndex:(long long)a0;
- (void)reloadDataWithSelectedIndex;
- (void)reloadContents;
- (void)reloadSubViews;
- (void)updateSelectedButton:(long long)a0 animated:(BOOL)a1 isManual:(BOOL)a2;
- (void)makeTrackerNode:(id)a0 model:(id)a1 index:(long long)a2;
- (void)didClickTitleButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorViewFrameFromSelectedIndex:(unsigned long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)addObservers;
- (void)setIsAttachment:(BOOL)a0;

@end
