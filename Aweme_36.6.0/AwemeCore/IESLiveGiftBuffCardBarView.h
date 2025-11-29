@class RACCompoundDisposable, IESLiveGradientView, IESLiveGiftBuffItem, NSString, UIScrollView, NSMutableArray, UIView;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftBuffCardBarView : UIView <UIScrollViewDelegate, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollBar;
@property (retain, nonatomic) NSMutableArray *giftBuffCards;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) IESLiveGradientView *leadGradientView;
@property (retain, nonatomic) IESLiveGradientView *trailGradientView;
@property (retain, nonatomic) IESLiveGiftBuffItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)updateCardsWithCardConfigs:(id)a0;
- (void)relocationIfNeeded;
- (void)setCardsShowIfNeededWithScrollViewXOffset:(double)a0;
- (void)bindItem;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;
- (struct CGSize { double x0; double x1; })layoutViewSize;

@end
