@class NSString, AWEAwemeModel;

@interface AWEClientAIPortraitContextHelper : NSObject <AWEClientAIPortraitContextHelper> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (weak, nonatomic) AWEAwemeModel *currentAwemeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
