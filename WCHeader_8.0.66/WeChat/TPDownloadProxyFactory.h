@class NSLock, NSMutableDictionary;

@interface TPDownloadProxyFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *tpDownloadProxyDic;
@property (retain, nonatomic) NSLock *proxyMapLock;

+ (id)sharedInstance;

- (id)getTPDownloadProxy:(int)a0;
- (id)init;
- (void).cxx_destruct;

@end
