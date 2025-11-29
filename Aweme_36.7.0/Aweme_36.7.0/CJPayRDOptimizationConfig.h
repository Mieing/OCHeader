@interface CJPayRDOptimizationConfig : JSONModel

@property (nonatomic) BOOL isPopupVCUseCoordinatorPop;
@property (nonatomic) BOOL isAddLoadingViewInTopHalfPage;
@property (nonatomic) BOOL isDisableMonitorRequestBizResult;
@property (nonatomic) BOOL isDisableTrackUnexpectedAssetStdScene;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
