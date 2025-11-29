@interface AWEPOIDetailComponent : AWEUserDetailBaseComponent

@property (nonatomic) BOOL isShareReflow;

- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)dealloc;

@end
