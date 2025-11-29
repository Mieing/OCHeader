@class NSString;

@interface NetSceneCheckMagicUpdate : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *mPackageId;

- (void)dealloc;
- (void)checkMagicPkgUpdateWithCondition:(id)a0 base:(id)a1 patch:(id)a2 check:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)getDefaultConditions;
- (void).cxx_destruct;

@end
