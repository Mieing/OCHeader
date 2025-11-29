@class NSMutableSet, BDPODRCodeDownloader;

@interface BDPODRFileDownloaderProxy : NSObject

@property (retain, nonatomic) BDPODRCodeDownloader *downloader;
@property (retain, nonatomic) NSMutableSet *mpids;

- (void).cxx_destruct;
- (id)init;

@end
