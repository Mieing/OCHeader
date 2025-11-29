@class NSArray, IESLiveKTVDecorateSubContext, NSString;

@interface IESLiveKTVDecorateMidiSection : IGListSectionController <UICollectionViewDelegate>

@property (weak, nonatomic) IESLiveKTVDecorateSubContext *context;
@property (retain, nonatomic) NSArray *midiModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)initWithContext:(id)a0 diContext:(id)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
