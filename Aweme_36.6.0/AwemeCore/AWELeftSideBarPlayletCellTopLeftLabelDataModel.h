@class NSString, AWEVideoChargeStrategyStruct, AWEPlayletChargeInfoModel;

@interface AWELeftSideBarPlayletCellTopLeftLabelDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isExclusive;
@property (retain, nonatomic) AWEPlayletChargeInfoModel *chargeInfoModel;
@property (retain, nonatomic) AWEVideoChargeStrategyStruct *chargeStrategyModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chargeStrategyModelJSONTransformer;
+ (id)chargeInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
