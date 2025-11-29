@class CAGradientLayer, NSArray, NSString, UIScrollView, IESLiveGiftBarItem, IESLiveGradientView;
@protocol IESLiveCompoundSubscription, IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftTabListView : UIView <UIScrollViewDelegate, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIScrollView *tabButtonsScrollView;
@property (retain, nonatomic) CAGradientLayer *leftRightMaskLayer;
@property (nonatomic) BOOL hasNewLeftMask;
@property (nonatomic) BOOL hasNewRightMask;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) IESLiveGiftBarItem *selectedBarItem;
@property (retain, nonatomic) IESLiveGradientView *tabsLeadingGradientView;
@property (retain, nonatomic) IESLiveGradientView *tabsTrailingGradientView;
@property (nonatomic) double contentSizeWidth;
@property (nonatomic) double leftPadding;
@property (nonatomic) BOOL hasSetLandscapeGradientLayer;
@property (nonatomic) BOOL hasReloadTab;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL enableRenderOpt;
@property (readonly, nonatomic) BOOL enableTabScrollToVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)trackShowEvent;
- (void)loadTabButtons;
- (void)reloadTabButtons;
- (void)_selectButton:(id)a0 animated:(BOOL)a1;
- (long long)installTabScrollView;
- (void)selectButtonAtIndex:(unsigned long long)a0;
- (void)observeTabButtonsScrollView;
- (id)createPageButtonWithCollectionViewModel:(id)a0;
- (void)setLandscapeGradientViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateMaskLayerWithLeft:(BOOL)a0 right:(BOOL)a1;
- (void)_fireSelectionCommandWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)deSelectButton;
- (void)scrollToVisible:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)didSelectButton:(id)a0;
- (struct CGSize { double x0; double x1; })layoutViewSize;

@end
