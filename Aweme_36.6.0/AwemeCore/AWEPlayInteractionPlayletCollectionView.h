@class NSString, AWECollectionButton;
@protocol AWEPlayInteractionPlayletCollectionViewDelegate, AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionPlayletCollectionView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEPlayInteractionPlayletCollectionViewDelegate> collectionViewDelegate;
@property (retain, nonatomic) AWECollectionButton *collectionButton;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (void)btnClicked:(id)a0;
- (id)adaptLargeFontImage:(id)a0;
- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
