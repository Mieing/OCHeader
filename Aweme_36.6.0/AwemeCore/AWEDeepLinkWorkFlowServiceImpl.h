@class NSString, NSMutableArray, MMKV;

@interface AWEDeepLinkWorkFlowServiceImpl : NSObject {
    NSString *_lastDeepLinkUpdateVersionCode;
}

@property (retain, nonatomic) NSMutableArray *taskExecutor;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (id)sharedInstance;

- (void)registerAWEDeepLinkWorkFlowService:(id)a0;
- (id)lastDeepLinkUpdateVersionCode;
- (void)setLastDeepLinkUpdateVersionCode:(id)a0;
- (void)deepLinkSchemeAcquired:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
