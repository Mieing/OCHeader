@interface AWEProfileSessionBaseComponent : AWEProfileBaseComponent

@property (nonatomic) long long currentSelectedIndex;

- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)trackProfileEnter:(id)a0;
- (void)setupProfileSessionID;
- (void)trackProfileExit:(id)a0;
- (void)onInit;

@end
