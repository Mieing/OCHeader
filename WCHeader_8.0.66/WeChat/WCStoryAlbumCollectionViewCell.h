@class SightFileMaskView, WCMomentsPageContext, WCMediaItem, NSString;

@interface WCStoryAlbumCollectionViewCell : UICollectionViewCell <WCImageViewDelegate>

@property (retain, nonatomic) SightFileMaskView *playIconView;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
