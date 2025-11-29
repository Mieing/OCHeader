@class AWECollectionButton;
@protocol AWEPlayInteractionMixVideoCollectionViewDelegate;

@interface AWEPlayInteractionMixVideoCollectionView : UIView

@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEPlayInteractionMixVideoCollectionViewDelegate> delegate;
@property (retain, nonatomic) AWECollectionButton *collectionButton;

- (void)p_setup;
- (void)btnClicked:(id)a0;
- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
