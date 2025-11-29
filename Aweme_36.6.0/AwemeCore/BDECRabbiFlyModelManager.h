@class NSString, NSMapTable, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyModelManager : NSObject <BDECRabbiFlyIModelManager>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMapTable *modelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getModel:(id)a0;
- (id)initWithSupervisor:(id)a0;
- (id)getModelList;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
