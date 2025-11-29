@class AWEArchEventDataController, AWEArchProtector;

@interface AWEArchContainer : NSObject

@property (retain, nonatomic) AWEArchProtector *p_modelArray;
@property (retain, nonatomic) AWEArchEventDataController *edc;
@property (weak, nonatomic) AWEArchContainer *parentContainer;

- (void)setupContainer;
- (BOOL)isValidContainer:(id)a0;
- (void)addSubContainer:(id)a0;
- (id)sharedDataOfID:(id)a0 defaultValue:(id)a1;
- (id)sharedDataOfID:(id)a0;
- (void)shareData:(id)a0 toID:(id)a1;
- (void)shareData:(id)a0 toID:(id)a1 broadcast:(BOOL)a2;
- (void)shareDataToID:(id)a0 closure:(id /* block */)a1;
- (void)shareDataToID:(id)a0 broadcast:(BOOL)a1 closure:(id /* block */)a2;
- (void)sendEvent:(id)a0 data:(id)a1;
- (void)addSubContainers:(id)a0;
- (void)removeSubContainer:(id)a0;
- (void)removeAllSubContainers;
- (void)subscribeEvent:(id)a0 completion:(id /* block */)a1;
- (void)subscribeData:(id)a0 completion:(id /* block */)a1;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
