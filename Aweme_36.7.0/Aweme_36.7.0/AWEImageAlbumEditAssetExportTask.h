@class NSArray, NSString;

@interface AWEImageAlbumEditAssetExportTask : NSObject <ACCImageAlbumAssetsExportTask>

@property (copy, nonatomic) NSArray *exportItems;
@property (readonly, nonatomic) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
