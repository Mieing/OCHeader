@class IESECOperationPathHelperManager, IESECBlenderContext, NSDictionary, NSString;

@interface IESECBlenderDataManager : NSObject <IESECBlenderDataManagerProtocol>

@property (retain, nonatomic) NSDictionary *globalInfo;
@property (retain, nonatomic) NSDictionary *root;
@property (retain, nonatomic) IESECOperationPathHelperManager *pathHelperManager;
@property (retain, nonatomic) NSDictionary *apiResponseData;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateGlobalInfoToViewModel;
- (id)convertJsonArray:(id)a0;
- (void)operateDataModel:(id)a0;
- (id)itemWithPath:(id)a0;
- (void)replaceWithPathHelper:(id)a0 opNode:(id)a1 newNode:(id)a2;
- (id)blenderViewManager;
- (id)rootNodeWithKey:(id)a0;
- (id)itemWithNodeId:(id)a0 inContainer:(id)a1;
- (void)addTopLevelNodeObserverWithNode:(id)a0;
- (void)attachRootWithNewNode:(id)a0;
- (void)updateGlobalInfo:(id)a0;
- (void)operateData:(id)a0;
- (id)itemWithNodeId:(id)a0;
- (void)updateApiResponseData:(id)a0;
- (id)findNodeWithKey:(id)a0 inContainer:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
