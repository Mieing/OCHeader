@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UDRCdnDownloadService : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_dicDownloadingItem;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)cdnDownloadUDR:(id)a0 resource:(id)a1 scene:(long long)a2 extInfo:(id)a3 fullPkg:(BOOL)a4;
- (void).cxx_destruct;

@end
