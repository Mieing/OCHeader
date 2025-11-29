@class BDPODRPluginCodeDownloader, NSMutableSet;

@interface BDPODRPluginFileDownloaderProxy : NSObject

@property (retain, nonatomic) BDPODRPluginCodeDownloader *downloader;
@property (retain, nonatomic) NSMutableSet *mpids;

- (void).cxx_destruct;
- (id)init;

@end
