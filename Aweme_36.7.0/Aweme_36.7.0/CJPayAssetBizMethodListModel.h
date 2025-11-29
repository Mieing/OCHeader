@class CJPayDefaultChannelShowConfig, NSString, CJPayAssetInfoModel;

@interface CJPayAssetBizMethodListModel : NSObject

@property (retain, nonatomic) CJPayAssetInfoModel *assetInfo;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (copy, nonatomic) NSString *errorTipsText;

- (void).cxx_destruct;

@end
