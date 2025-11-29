@class NSMutableArray, MMKV;

@interface AWEUGSnackbarStrategyManager : NSObject

@property (retain, nonatomic) NSMutableArray *strategyList;
@property (retain, nonatomic) MMKV *mmkv;

+ (id)sharedManager;

- (void)clearRecord;
- (void)markSnackbarForbiddenForSceneType:(id)a0 params:(id)a1;
- (void)trackLogWithMessage:(id)a0;
- (void)injectSnackbarStrategy:(id)a0 config:(id)a1 evadeStrategy:(id)a2;
- (void)removeSnackbarStrategy:(id)a0;
- (void)reportShortcutInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
