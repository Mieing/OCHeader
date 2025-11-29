@class NSString, UIScrollView, IESLiveGradientView, NSMutableArray;
@protocol IESLiveFantasticGiftGroupSelectionListViewDataSource, IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveFantasticGiftGroupSelectionListView : UIView <IESLiveCollectionViewCellProtocol, UIScrollViewDelegate, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveGradientView *groupSelectionLeadGradientView;
@property (retain, nonatomic) IESLiveGradientView *groupSelectionTrailGradientView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long lastSelectedIndex;
@property (weak, nonatomic) id<IESLiveFantasticGiftGroupSelectionListViewDataSource> dataSource;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)jumpOut;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupContent;
- (struct CGSize { double x0; double x1; })layoutViewSize;

@end
