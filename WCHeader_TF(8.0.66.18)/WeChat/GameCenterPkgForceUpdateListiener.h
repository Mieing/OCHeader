@class NSString;

@interface GameCenterPkgForceUpdateListiener : NSObject

@property (retain, nonatomic) NSString *pkgId;
@property (copy, nonatomic) id /* block */ didCompleteBlock;
@property (retain, nonatomic) NSString *errorDesc;
@property (nonatomic) BOOL successUpdate;
@property (retain, nonatomic) GameCenterPkgForceUpdateListiener *selfRef;

- (id)initWithTargetPkgId:(id)a0 didCompleteBlock:(id /* block */)a1;
- (void)updatePkg;
- (void)onWekgOperateSuccess:(id)a0;
- (void)onPkgUpdateComplete:(id)a0 result:(BOOL)a1 errorStr:(id)a2;
- (void)onWekgUpdateFailed:(id)a0 errorStr:(id)a1;
- (void)onWepkgNoNeedUpdate:(id)a0 version:(id)a1;
- (void).cxx_destruct;

@end
