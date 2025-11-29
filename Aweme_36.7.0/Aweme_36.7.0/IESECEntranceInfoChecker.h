@class IESECEntranceInfoScene;

@interface IESECEntranceInfoChecker : NSObject

@property (retain, nonatomic) IESECEntranceInfoScene *scene;
@property (nonatomic) BOOL filterEnable;

- (id)checkForceRule:(id)a0;
- (void)checkRequiredPut:(id)a0;
- (void)checkRequiredRemove:(id)a0;
- (void)setupFilterEnable;
- (void)checkRequiredOperation:(id)a0 operation:(unsigned long long)a1;
- (BOOL)checkMajorList:(id)a0;
- (BOOL)checkDelete:(id)a0;
- (BOOL)checkPut:(id)a0 value:(id)a1;
- (BOOL)checkModify:(id)a0 toValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
