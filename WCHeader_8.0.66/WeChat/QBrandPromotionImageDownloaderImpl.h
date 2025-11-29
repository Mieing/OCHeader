@class NSMutableDictionary, QMapLRUCache, NSString, NSLock;

@interface QBrandPromotionImageDownloaderImpl : NSObject <QMapLRUCacheDelegate, QBrandPromotionImageDownloader>

@property (retain, nonatomic) NSMutableDictionary *imageTaskDict;
@property (retain, nonatomic) QMapLRUCache *imageCache;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)requestLogoImageWithViewItem:(id)a0;
- (void)cancelRequestWithViewItem:(id)a0;
- (void)handleResponseData:(id)a0 urlString:(id)a1;
- (void)handleResponseError:(id)a0 urlString:(id)a1;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;

@end
