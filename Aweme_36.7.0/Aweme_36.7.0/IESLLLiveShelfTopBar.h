@class IESLLLiveShelfHeaderViewModel, IESLLLiveShelfPagingDataController, UIScrollView, IESLLLiveShelfHeaderView, UIView;

@interface IESLLLiveShelfTopBar : UIView

@property (retain, nonatomic) IESLLLiveShelfHeaderView *headerView;
@property (nonatomic) BOOL isShowPoiInfo;
@property (retain, nonatomic) IESLLLiveShelfHeaderViewModel *headerViewModel;
@property (weak, nonatomic) UIScrollView *linkedScrollView;
@property (nonatomic) double barHeight;
@property (nonatomic) double ceilingHeight;
@property (nonatomic) double currentOffset;
@property (copy, nonatomic) id /* block */ heightChangeBlock;
@property (copy, nonatomic) id /* block */ visibleHeightChangeBlock;
@property (copy, nonatomic) id /* block */ poiDetailTapActionBlock;
@property (copy, nonatomic) id /* block */ poiTitleClickedBlock;
@property (copy, nonatomic) id /* block */ orderBtnClickedBlock;
@property (copy, nonatomic) id /* block */ consultBtnClickedBlock;
@property (copy, nonatomic) id /* block */ vipBtnClickedBlock;
@property (copy, nonatomic) id /* block */ vipBtnShowedBlock;
@property (copy, nonatomic) id /* block */ filterCardListBlock;
@property (copy, nonatomic) id /* block */ requestCardListBlock;
@property (copy, nonatomic) id /* block */ lynxCloseLiveLifeShelf;
@property (copy, nonatomic) id /* block */ switchHalfScreenMode;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) IESLLLiveShelfPagingDataController *dataController;

- (void)updateTopOffset:(double)a0;
- (BOOL)optionBtnViewIsShowing;
- (void)dismissOptionBtnView;
- (void)dealOutsideScrollWithDirection:(unsigned long long)a0 offset:(double)a1 contentHeight:(double)a2 extraParams:(id)a3;
- (void)viewClosed;
- (void)viewOpen;
- (void)sendShelfTopbarResumeEvent;
- (void)addLinkedScrollView:(id)a0;
- (void)configWithModel:(id)a0 pageType:(long long)a1 actionType:(unsigned long long)a2;
- (void)configHeaderView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateFrame;

@end
