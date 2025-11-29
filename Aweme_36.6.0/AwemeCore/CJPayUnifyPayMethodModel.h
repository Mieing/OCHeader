@class NSArray, CJPayUnifyPayMethodListGroupModel, CJPayAssetInfoModel;

@interface CJPayUnifyPayMethodModel : NSObject

@property (retain, nonatomic) CJPayAssetInfoModel *assetModel;
@property (retain, nonatomic) NSArray *listGroupModel;
@property (retain, nonatomic) CJPayUnifyPayMethodListGroupModel *detailGroupModel;
@property (nonatomic) long long combineAssetIndex;
@property (nonatomic) BOOL isUnifyStyleOpt;
@property (nonatomic) BOOL isHiddenTopView;

- (id)listDataSource;
- (id)detailDataSource;
- (void).cxx_destruct;

@end
