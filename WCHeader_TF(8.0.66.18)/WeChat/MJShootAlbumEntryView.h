@class UIImageView;
@protocol MJShootAlbumEntryViewDelegate;

@interface MJShootAlbumEntryView : UIView

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (readonly, nonatomic) unsigned long long sizeMode;
@property (weak, nonatomic) id<MJShootAlbumEntryViewDelegate> delegate;

- (id)initWithSizeMode:(unsigned long long)a0;
- (void)commonInit;
- (void)addAssetsButtonTouchupInside:(id)a0;
- (void)fetchLatestAssetThumbnail;
- (id)placeholderImage;
- (void).cxx_destruct;

@end
