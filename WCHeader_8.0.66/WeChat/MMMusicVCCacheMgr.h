@class NSString, MMMusicViewController;

@interface MMMusicVCCacheMgr : MMUserService <MMServiceProtocol> {
    NSString *_curCachedKey;
    MMMusicViewController *_curCachedVC;
}

@property (nonatomic) BOOL curCachedVCReusable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openParamsWithMVModel:(id)a0;
+ (id)openParamsWithMusicInfo:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (id)popUsableViewControllerAndMayNilIfConflictWithOpenParams:(id)a0;
- (void)markSelfPopedOrDismissed:(id)a0;
- (void)clearCachedVC;
- (void).cxx_destruct;

@end
