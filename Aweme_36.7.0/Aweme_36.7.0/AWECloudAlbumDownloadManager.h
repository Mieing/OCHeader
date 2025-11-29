@class NSString, EcAsset;
@protocol AWECloudAlbumDownloadManagerDelegate;

@interface AWECloudAlbumDownloadManager : NSObject <EcTaskChangeProtocol>

@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) EcAsset *asset;
@property (weak, nonatomic) id<AWECloudAlbumDownloadManagerDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheDirectory;

- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (id)initWithAlbumId:(unsigned long long)a0 asset:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)download;
- (void)cancel;

@end
