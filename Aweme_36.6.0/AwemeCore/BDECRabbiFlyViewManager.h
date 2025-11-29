@class NSMapTable, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyViewManager : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMapTable *viewMap;

- (id)initWithSupervisor:(id)a0;
- (id)getViewList;
- (id)getView:(id)a0;
- (void)setView:(id)a0 token:(id)a1;
- (void).cxx_destruct;
- (void)clean;

@end
