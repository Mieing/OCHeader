@class NSString;

@interface AWEDetailPropCollectionFullConfiguration : NSObject <AWEDetailPropCollectionConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_configureLayoutForCell:(id)a0;
- (void)p_configureUIForCell:(id)a0;
- (void)configureContainerView:(id)a0 collectionView:(id)a1;
- (void)configureCollectionViewCell:(id)a0 withURLModel:(id)a1;
- (struct CGSize { double x0; double x1; })containerSize;
- (struct CGSize { double x0; double x1; })cellSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewContentInset;

@end
