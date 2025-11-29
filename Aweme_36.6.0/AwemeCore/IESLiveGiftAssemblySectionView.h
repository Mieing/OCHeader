@class IESLiveGiftAssemblyCustomizeEntranceView, CAGradientLayer, NSString, IESLiveGiftAssemblySectionViewModel, UIScrollView, UIView, NSMutableArray;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftAssemblySectionView : UIView <UIScrollViewDelegate, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveGiftAssemblySectionViewModel *giftAssemblyVM;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *cardScrollView;
@property (retain, nonatomic) IESLiveGiftAssemblyCustomizeEntranceView *entranceView;
@property (retain, nonatomic) NSMutableArray *cardsOnCounter;
@property (retain, nonatomic) UIView *vanishMatteView;
@property (retain, nonatomic) CAGradientLayer *matteGradientLayer;
@property (nonatomic) BOOL entranceIsHidden;
@property (nonatomic) long long preSelectedCardIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)p_updateAndDisplayCustomizedCardsWithConfigs:(id)a0;
- (void)p_updateCustomizeEntranceViewWithModel:(id)a0;
- (void)regenerateCustomCards:(id)a0;
- (void)p_updateEntranceVisibility:(BOOL)a0;
- (void)p_clearCurrentCards;
- (BOOL)_shouldEnableCardScroll;
- (void)p_rearrangeCardsIfNeeded;
- (void)p_updateCardExposureStatusWithScrollViewXOffSet:(double)a0;
- (void)p_updateMatteMaskOnScolling:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)setupViews;
- (struct CGSize { double x0; double x1; })layoutViewSize;

@end
