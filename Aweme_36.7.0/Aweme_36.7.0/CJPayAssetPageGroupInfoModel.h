@class NSString, NSArray, CJPayAssetSelectPageGroupEnhanceInfo;
@protocol CJPayAssetTipsMsgInfo, CJPaySubGroupListModel, CJPayUIComponentTextModel;

@interface CJPayAssetPageGroupInfoModel : JSONModel

@property (copy, nonatomic) NSString *groupStyle;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *groupTitleImage;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSArray *assetIndexList;
@property (copy, nonatomic) NSArray<CJPaySubGroupListModel> *subGroupList;
@property (copy, nonatomic) NSString *groupDesc;
@property (nonatomic) long long displayCount;
@property (copy, nonatomic) NSString *foldDesc;
@property (retain, nonatomic) CJPayAssetSelectPageGroupEnhanceInfo *groupEnhanceInfo;
@property (copy, nonatomic) NSArray *canDisplayIconAssetIndexList;
@property (copy, nonatomic) NSArray<CJPayAssetTipsMsgInfo> *tipsMsgInfolist;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *labelList;
@property (copy, nonatomic) NSString *groupBgImage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)toChooseGroupModel;
- (id)toChooseQualityGroupModel;
- (id)toUnifyPayMethodListGroupModel;
- (id)getTipsMsgWithSelectedShowConfig:(id)a0;
- (void).cxx_destruct;

@end
