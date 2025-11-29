@class NSString, UIScrollView, NSMutableArray, UIView;
@protocol MMMsgSearchTabPageViewDelegate;

@interface MMMsgSearchTabViewContainer : UIView <MMMsgSearchTabViewDelegate>

@property (retain, nonatomic) UIScrollView *tabContainer;
@property (retain, nonatomic) NSMutableArray *tabViewArray;
@property (nonatomic) unsigned long long selectIndex;
@property (retain, nonatomic) UIView *tabUnderLine;
@property (weak, nonatomic) id<MMMsgSearchTabPageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabViewArray:(id)a0;
- (void)initView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)calculateHeight;
- (double)calculateTabContainerHeight;
- (void)setupUI;
- (unsigned long long)getSelectIndex;
- (void)adjustTabViewFrame;
- (unsigned int)getMsgSearchType;
- (void)selectTabWithMsgSearchType:(unsigned int)a0;
- (BOOL)checkHadMsgSearchType:(unsigned int)a0;
- (void)reloadSearchTabViewContainerWithTabViewArray:(id)a0;
- (void)setTabLodeTypeWithMsgSearchType:(unsigned int)a0 msgSearchLoadingType:(unsigned int)a1 loadingAddNumber:(unsigned int)a2;
- (void)updateTabViewContainerLayout;
- (void)handleTapGesture:(id)a0;
- (void)adjustContentOffsetWithTabView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabUnderLineFrameForTabView:(id)a0;
- (void)searchTabPageTabView:(id)a0 changeToWidth:(double)a1;
- (void).cxx_destruct;

@end
