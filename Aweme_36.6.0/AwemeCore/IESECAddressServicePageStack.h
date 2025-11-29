@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESECAddressServicePageStack : NSObject {
    NSMutableArray *_pageNodes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;

+ (id)shareInstance;

- (void)buildStack:(id)a0 btmCode:(id)a1 maxSize:(long long)a2;
- (id)getAddressResultWithCurrentBTM:(id)a0 btmCode:(id)a1 config:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
