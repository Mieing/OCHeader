@class NSString, NSMutableDictionary;

@interface CJPayAnnieHandler : NSObject <CJPayAnnieServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *callbackMap;
@property (nonatomic) long long callbackId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (id)annieScheme:(id)a0 closeCallBack:(id /* block */)a1;
- (id /* block */)callbackWithId:(id)a0;
- (void)removeCallbackId:(id)a0;
- (BOOL)isUrlInWhiteList:(id)a0;
- (BOOL)p_isUrlInBlackPathList:(id)a0;
- (BOOL)p_isUrlInSettingsPathList:(id)a0;
- (BOOL)p_isUrlInPathList:(id)a0;
- (BOOL)p_matchedPattern:(id)a0 path:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
