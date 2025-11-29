@class NSDictionary, NSString;

@interface IESIMLeftBarEntranceConfigComponent : HTSService <IESIMLeftBarEntranceConfigComponent>

@property (copy, nonatomic) NSDictionary *configDict;
@property (copy, nonatomic) NSDictionary *expDict;
@property (copy, nonatomic) NSDictionary *oldExpDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableMessageTabTitleRefactor;
- (BOOL)enableNaviPlusButtonRefactor;
- (BOOL)__enableNewConfig;
- (BOOL)__plusRefactorExpOldExp;
- (BOOL)__hasLeftSideBar;
- (BOOL)__didLeftSideBarFullyRelease;
- (BOOL)__isHighFans;
- (BOOL)__plusRefactorExpHighFans;
- (BOOL)__shouldLowFansUserUseExp;
- (BOOL)__plusRefactorExpLowFans;
- (BOOL)__titleRefactorExpOldExp;
- (BOOL)__titleRefactorExpHighFans;
- (BOOL)__titleRefactorExpLowFans;
- (void).cxx_destruct;
- (id)init;

@end
