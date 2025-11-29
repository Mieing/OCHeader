@class NSString, NSDictionary, CJPayAssetMetaInfoModel, CJPayAssetInfoModel, CJPayAssetToCombineAssetInfoModel;

@interface CJPayRetainInfo : NSObject

@property (copy, nonatomic) NSDictionary *growthDataViewModel;
@property (retain, nonatomic) CJPayAssetMetaInfoModel *assetMetaInfo;
@property (retain, nonatomic) CJPayAssetInfoModel *assetInfoModel;
@property (retain, nonatomic) CJPayAssetToCombineAssetInfoModel *combineAssetInfoModel;
@property (copy, nonatomic) NSString *isClientDecision;
@property (copy, nonatomic) NSString *retainUnavailableReason;
@property (copy, nonatomic) NSString *isBioDegrade;
@property (copy, nonatomic) NSString *handInfoStr;
@property (copy, nonatomic) NSString *processInfo;
@property (copy, nonatomic) NSDictionary *commonTrackParams;

- (id)toFeDictionary;
- (void).cxx_destruct;

@end
