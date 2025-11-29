@class NSMutableSet;
@protocol DitoBodyDisplayManangerDelegate;

@interface DitoBodyDisplayMananger : NSObject

@property (retain, nonatomic) NSMutableSet *halfDisplaySet;
@property (retain, nonatomic) NSMutableSet *fullDisplaySet;
@property (retain, nonatomic) NSMutableSet *waitForDisplaySet;
@property (retain, nonatomic) NSMutableSet *waitForEndDisplaySet;
@property (weak, nonatomic) id<DitoBodyDisplayManangerDelegate> delegate;

- (void)addToWaitForDisplaySet:(id)a0;
- (void)addToHalfDisplaySet:(id)a0;
- (void)addToFullDisplaySet:(id)a0;
- (void)clearIndexPath:(id)a0;
- (void)addToWaitForEndDisplaySet:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)clear;
- (id)init;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionViewDidScroll:(id)a0;

@end
