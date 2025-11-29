@class IESLiveInteractiveGiftListCollectionView, UICollectionViewLayout, IESLiveInteractiveGiftTopHintView, IESLiveInteractiveGiftAudienceAbleViewModel, UIView, IESLiveInteractiveGiftAudienceAbleTopView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveInteractiveGiftAudienceAbleView : UIView

@property (retain, nonatomic) IESLiveInteractiveGiftListCollectionView *giftListView;
@property (retain, nonatomic) IESLiveInteractiveGiftAudienceAbleTopView *topContainer;
@property (retain, nonatomic) IESLiveInteractiveGiftTopHintView *hintView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> bindToken;
@property (retain, nonatomic) IESLiveInteractiveGiftAudienceAbleViewModel *viewModel;

- (void)didSetAttachingDIContext;
- (void)refreshView;
- (void)setUpRAC;
- (void)refreshSingleCellWithBeforePath:(id)a0 endPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)setUpView;

@end
