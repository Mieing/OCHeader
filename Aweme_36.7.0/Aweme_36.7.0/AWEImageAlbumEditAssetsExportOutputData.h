@class NSArray, NSString;

@interface AWEImageAlbumEditAssetsExportOutputData : NSObject <ACCImageAlbumEditAssetsExportOutputDataProtocol>

@property (copy, nonatomic) NSArray *originalImages;
@property (copy, nonatomic) NSArray *compressedFramsImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)filtrationValidImageInfoIfNeed;
- (id)downloadTrackInfo;
- (void).cxx_destruct;

@end
