@class NSArray, WCFinderHorizontalSlideView, NSString;
@protocol WCFinderMultiMusicianInfoViewDelegate;

@interface WCFinderMultiMusicianInfoView : MMUIView <WCFinderHorizontalSlideViewDelegate>

@property (retain, nonatomic) WCFinderHorizontalSlideView *collectionView;
@property (retain, nonatomic) NSArray *singerInfoArray;
@property (weak, nonatomic) id<WCFinderMultiMusicianInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithSingerInfoArray:(id)a0;
- (long long)onHorizontalSlideNumberOfItems;
- (id)onHorizontalSlideCollectionView:(id)a0 indexPath:(id)a1;
- (void)onHorizontalSlideDidSelectItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
