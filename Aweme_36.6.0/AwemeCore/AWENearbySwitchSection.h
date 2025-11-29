@class NSString;

@interface AWENearbySwitchSection : NSObject <AWENearbySwitchSectionProtocol>

@property (nonatomic) long long currentFeedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeedType:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForHeader;
- (long long)numberOfItems;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;

@end
