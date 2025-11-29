@class NSMapTable;

@interface IESThirdPartyStickerDownloadService : NSObject

@property (retain, nonatomic) NSMapTable *taskMapTable;

- (void)downloadThirdPartyModel:(id)a0 downloadQueuePriority:(long long)a1 downloadQualityOfService:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
