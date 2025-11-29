@class NSArray, NSString, UICollectionView;
@protocol IESIMConversationProtocol;

@interface AWEIMAchieveMateStickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) NSArray *helloStickers;
@property (weak, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubview;
- (id)p_getEmotionModelWithDisplayName:(id)a0;
- (id)initWithModelList:(id)a0 conversation:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
