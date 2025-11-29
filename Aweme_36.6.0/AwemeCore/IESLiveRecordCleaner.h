@interface IESLiveRecordCleaner : NSObject

@property (nonatomic) BOOL isCleanMode;
@property BOOL didClear;

- (void)cleanScreen;
- (void)showScreen;
- (void)hideNormalProfile;
- (void)hideNormalToolbar;
- (void)cleanScreenForContainer;
- (void)showScreenForContainer;
- (void)showNormalProfile;
- (void)showNormalToolBar;
- (void)excuteClean:(BOOL)a0 completion:(id /* block */)a1;
- (void)showScreenForDismiss:(BOOL)a0 completion:(id /* block */)a1;

@end
