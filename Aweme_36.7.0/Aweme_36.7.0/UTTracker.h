@class UTDSDKInfo, NSMutableDictionary, NSString;

@interface UTTracker : NSObject {
    NSMutableDictionary *mGlobalArgs;
    NSMutableDictionary *mReserves;
    NSString *mTrackId;
}

@property (readonly, copy) UTDSDKInfo *mSdkinfo;

- (void)setGlobalProperty:(id)a0 value:(id)a1;
- (id)getGlobalProperty:(id)a0;
- (id)getAppKey;
- (void)pageAppear:(id)a0 withPageName:(id)a1;
- (void)updateNextPageProperties:(id)a0;
- (void)sender:(id)a0 isSync:(BOOL)a1;
- (id)initWithTrackId:(id)a0;
- (id)initWithAppKey:(id)a0 appsecret:(id)a1 authcode:(id)a2 securitySign:(BOOL)a3;
- (id)initWithTracker:(id)a0 trackid:(id)a1;
- (void)removeGlobalProperty:(id)a0;
- (void)pageAppear:(id)a0;
- (void)pageDisAppear:(id)a0;
- (void)updatePageName:(id)a0 pageName:(id)a1;
- (void)updatePageProperties:(id)a0 properties:(id)a1;
- (void)updatePageUrl:(id)a0 url:(id)a1;
- (void)updatePageStatus:(id)a0 status:(int)a1;
- (void)skipPage:(id)a0;
- (void)ctrlClicked:(id)a0 onPage:(id)a1 args:(id)a2;
- (void).cxx_destruct;
- (void)send:(id)a0;

@end
