@class NSDictionary;

@interface APConfig : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (retain, nonatomic) NSDictionary *configContent;

+ (id)shared;

- (void)updateConfig:(id)a0;
- (id)utdid;
- (BOOL)isEnableForKey:(id)a0;
- (BOOL)isEnable:(id)a0;
- (id)c64to10:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)factor;
- (id)valueForKey:(id)a0;

@end
