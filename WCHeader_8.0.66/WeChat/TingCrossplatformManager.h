@class TingPlayerManager;

@interface TingCrossplatformManager : NSObject

@property (retain, nonatomic) TingPlayerManager *playTaskController;

- (id)initWithPlayerManager:(id)a0;
- (id)affBizCommonPath;
- (void)initAffBizEnviroment;
- (void)initCommonReddotSync;
- (void)onManagerEnterForeground;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
