@class NSDictionary, NSMutableDictionary;

@interface AWEClientAIBrightnessAdjustmentConfigManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSDictionary *abConfigDict;
@property (retain, nonatomic) NSMutableDictionary *configDict;

+ (id)sharedInstance;

- (id)configWithContentType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
