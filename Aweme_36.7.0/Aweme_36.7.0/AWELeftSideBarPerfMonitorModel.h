@class NSString, AWELeftSideBarContainerPerfCostInfosModel, NSMutableDictionary;

@interface AWELeftSideBarPerfMonitorModel : NSObject

@property (retain, nonatomic) AWELeftSideBarContainerPerfCostInfosModel *containerPerfCostInfosModel;
@property (retain, nonatomic) NSMutableDictionary *businessPerfCostInfosModels;
@property (retain, nonatomic) NSMutableDictionary *openBizPageCostInfosModels;
@property (copy, nonatomic) NSString *identification;
@property (nonatomic) BOOL sideBarHasOpen;
@property (nonatomic) BOOL hasContainerTrack;
@property (copy, nonatomic) NSString *dataHash;

- (id)getBusinessKeyWithId:(id)a0 withType:(id)a1;
- (id)getBusinessPerfCostInfosModelByKey:(id)a0;
- (void)resetAllPageCostInfoModel;
- (void)traverseOpenBizPageCostInfoModelWithBlock:(id /* block */)a0;
- (void)resetOpenBizPageCostInfoModelByKey:(id)a0;
- (id)getOpenBizPageCostInfoModelByKey:(id)a0;
- (id)getContainerPerfCostInfoString;
- (id)getBusinessPerfCostInfoString;
- (void).cxx_destruct;
- (id)init;

@end
