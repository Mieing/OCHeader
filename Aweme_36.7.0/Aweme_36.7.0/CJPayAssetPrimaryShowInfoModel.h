@class NSString, CJPayAssetHomePageGuideInfo, NSArray, CJPayAssetCardStyleShowInfo, CJPayAssetHomePageGroupInfo;
@protocol CJPayAssetPageGroupInfoModel, CJPayAssetTipsMsgInfo;

@interface CJPayAssetPrimaryShowInfoModel : JSONModel

@property (copy, nonatomic) NSString *homePageShowStyle;
@property (copy, nonatomic) NSString *homePagePictureUrl;
@property (retain, nonatomic) CJPayAssetHomePageGuideInfo *homePageGuideInfo;
@property (retain, nonatomic) CJPayAssetCardStyleShowInfo *cardStyleShowInfo;
@property (copy, nonatomic) NSArray<CJPayAssetPageGroupInfoModel> *assetSelectPageGroupInfoList;
@property (copy, nonatomic) NSArray<CJPayAssetTipsMsgInfo> *tipsMsgInfolist;
@property (retain, nonatomic) CJPayAssetHomePageGroupInfo *assetHomePageGroupInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
