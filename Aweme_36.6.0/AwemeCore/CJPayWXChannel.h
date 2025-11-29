@class NSString;

@interface CJPayWXChannel : CJPayBasicChannel <WXApiDelegate>

@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL canHandleUserActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;
+ (BOOL)isAvailableUse;

- (void)onResp:(id)a0;
- (BOOL)canProcessWithURL:(id)a0;
- (BOOL)canProcessUserActivity:(id)a0;
- (void)appDidInForeground;
- (id)channelScheme;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)exeCompletionBlock:(unsigned long long)a0 resultType:(unsigned long long)a1 errCode:(id)a2;
- (id)getWEBayVersion;
- (void)handleWEBayResponse:(id)a0;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;

@end
