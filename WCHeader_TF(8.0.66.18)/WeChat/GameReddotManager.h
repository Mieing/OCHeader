@interface GameReddotManager : NSObject {
    BOOL _beUseFinderReddot;
    BOOL _beBlocked;
}

- (id)init;
- (BOOL)checkCanUseFinderReddot;
- (void)setFinderReddotInfo:(id)a0;
- (long long)convertStyle:(id)a0;
- (BOOL)useFinderReddot;
- (void)onFinderReload;
- (id)getCurrentReddot;
- (void)finderReddotExit:(long long)a0;
- (BOOL)beFrequancyControl;
- (void)blockGameReddot;
- (void)syncReddot:(id)a0;

@end
