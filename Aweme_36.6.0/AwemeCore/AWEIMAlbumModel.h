@class NSString, PHFetchResult;

@interface AWEIMAlbumModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) PHFetchResult *assets;

- (id)initWithAssets:(id)a0 title:(id)a1;
- (void).cxx_destruct;

@end
