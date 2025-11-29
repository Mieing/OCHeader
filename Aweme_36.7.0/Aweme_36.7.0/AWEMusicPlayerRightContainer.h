@class UIButton, UIView, UILabel, AWEMusicPlayerCollectionView;
@protocol AWEMusicPlayerRightContainerDelegate;

@interface AWEMusicPlayerRightContainer : UIStackView

@property (nonatomic) unsigned long long collectionType;
@property (retain, nonatomic) AWEMusicPlayerCollectionView *collectionView;
@property (retain, nonatomic) UIView *collectionViewContainer;
@property (retain, nonatomic) UILabel *shareLabel;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (weak, nonatomic) id<AWEMusicPlayerRightContainerDelegate> delegate;
@property (nonatomic) int element;

- (id)collectionButton;
- (void)setCollectionWithType:(unsigned long long)a0;
- (void)collectionButtonTappe;
- (void)shareButtonTappe;
- (void)moreButtonTappe;
- (id)addElementViewWithView:(id)a0 label:(id)a1 accessibilityLabel:(id)a2;
- (void)p_updateCollectionViewAccessibility;
- (void)onCollectionAnimEndWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
