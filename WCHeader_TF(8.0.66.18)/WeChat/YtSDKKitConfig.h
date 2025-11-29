@class NSDictionary, NSString;

@interface YtSDKKitConfig : NSObject {
    NSString *sdkConfigMd5;
    NSString *uiConfigMd5;
}

@property (retain, nonatomic) NSDictionary *sdkConfig;
@property (retain, nonatomic) NSDictionary *uiConfig;

+ (id)sharedInstance;
+ (void)clearInstance;

- (int)loadSDKConfigWith:(id)a0 withUIConfig:(id)a1;
- (BOOL)validateConfigData;
- (id)getUIConfigBy:(long long)a0;
- (id)getSDKConfigBy:(long long)a0;
- (id)parseJsonConfigWith:(id)a0 withJsonRoot:(id)a1 outWithResult:(int *)a2;
- (id)getStateNameArrayBy:(long long)a0;
- (id)getConfigData:(id)a0 withKey:(id)a1 withRequired:(BOOL)a2;
- (void)sendUIEventWithValue:(id)a0 withType:(id)a1;
- (id)getMd5:(id)a0;
- (void).cxx_destruct;

@end
