@class NSMutableDictionary;

@interface QTileDataDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadList;

- (id)init;
- (void)dealloc;
- (id)channelIdentifier;
- (id)statisticsParameters;
- (void)downloadTile:(id)a0 completion:(id /* block */)a1;
- (void)cancelDownloadTile:(id)a0;
- (void).cxx_destruct;

@end
