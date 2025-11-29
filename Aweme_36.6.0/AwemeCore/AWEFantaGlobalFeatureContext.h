@class NSString;

@interface AWEFantaGlobalFeatureContext : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (copy, nonatomic) NSString *searchEnterMethod;
@property (copy, nonatomic) NSString *searchKeyword;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
