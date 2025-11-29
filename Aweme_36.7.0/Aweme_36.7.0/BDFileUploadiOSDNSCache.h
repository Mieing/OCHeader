@class NSMutableDictionary;

@interface BDFileUploadiOSDNSCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *items;

+ (id)shareCache;

- (void)_appDidReceiveMemoryWarningNotification;
- (void)_appWillEnterForegroundNotification;
- (void)setItem:(id)a0 host:(id)a1;
- (id)getItemInfo:(id)a0;
- (id)getIpUsingRR:(id)a0;
- (void)_tryToClearExpiredItems;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)clearAllItems;
- (void)dealloc;

@end
