@class NSString;

@interface AWEPadHangoutAdapter : NSObject <AWEPadHangoutAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)getAdapter;

- (long long)columnNumWithCollectionView:(id)a0;
- (double)cellWidthWithCollectionView:(id)a0;
- (double)duxGridMarginWithCollectionView:(id)a0;
- (double)duxGridGutterWithCollectionView:(id)a0;
- (long long)columnNumsWithCollectionView:(id)a0;
- (id)weakTarget;

@end
