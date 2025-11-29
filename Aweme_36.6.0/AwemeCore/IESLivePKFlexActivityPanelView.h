@class NSString, IESLivePKFlexActivityPanelViewModel;
@protocol IESLivePKRecommendTabBasePanelViewDelegate;

@interface IESLivePKFlexActivityPanelView : UIView <UIScrollViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;
@property (nonatomic) double tempOffset;
@property (weak, nonatomic) id<IESLivePKRecommendTabBasePanelViewDelegate> tabDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)trackPanelShow;
- (void)drawUIWithAreas:(id)a0;
- (id)viewForArea:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setUpTitleView:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupCustomizeContent:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupRivalsListView:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupRegisteredUserView:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupPKRecordView:(id)a0 areaIndex:(unsigned long long)a1;
- (id)initWithDIContext:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;

@end
