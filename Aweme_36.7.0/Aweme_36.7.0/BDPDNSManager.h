@class NSOperationQueue, BDPMultiDelegateProxy, NSMutableDictionary;
@protocol BDPDNSResolveDelegate;

@interface BDPDNSManager : NSObject {
    NSOperationQueue *_opQueue;
    NSMutableDictionary *_pendingResolveHostDict;
}

@property (retain) BDPMultiDelegateProxy<BDPDNSResolveDelegate> *delegates;

+ (id)shareInstance;

- (void)cancelAllResolve;
- (void).cxx_destruct;
- (void)resolve:(id)a0;
- (id)init;

@end
