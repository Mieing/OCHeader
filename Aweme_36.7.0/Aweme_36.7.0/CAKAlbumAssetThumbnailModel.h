@class UIImage, NSDictionary, PHObject;

@interface CAKAlbumAssetThumbnailModel : NSObject

@property (retain, nonatomic) PHObject *asset;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL didFinished;
@property (nonatomic) BOOL didReset;
@property (copy, nonatomic) id /* block */ resultHandler;

- (void)callbackResultIfNeed;
- (BOOL)isFaild;
- (void)resetImageCache;
- (void).cxx_destruct;

@end
