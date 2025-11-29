@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AlibcTradeMiniSDKConfig : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_store;
}

@property (nonatomic) unsigned long long sdkState;
@property (nonatomic) BOOL isNeedUpdateSDK;
@property (copy, nonatomic) NSString *errorMsg;
@property long long environment;
@property unsigned long long logLevel;
@property (copy, nonatomic) NSString *utdId;
@property (copy, nonatomic) NSString *appKey;

+ (id)sharedConfig;

- (void)setValue:(id)a0 forKey:(id)a1 forModule:(id)a2;
- (void)setDictionary:(id)a0 forModule:(id)a1;
- (id)valueForKey:(id)a0 forModule:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
