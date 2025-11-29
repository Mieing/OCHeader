@class NSString, NSArray, NSDictionary, CJPayAssetPageGroupInfoModel;

@interface CJPayUnifyPayMethodListGroupModel : NSObject

@property (copy, nonatomic) NSString *methodGroupTitle;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) NSArray *disableMethodList;
@property (copy, nonatomic) NSDictionary *disableReasonMap;
@property (copy, nonatomic) NSArray *subPayTypeIndexList;
@property (copy, nonatomic) NSString *topRightButtonText;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) long long displayMethodCount;
@property (copy, nonatomic) NSString *foldedSectionDesc;
@property (retain, nonatomic) CJPayAssetPageGroupInfoModel *assetGroupInfoModel;
@property (nonatomic) BOOL isHasExpanded;

- (id)foldIconList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
