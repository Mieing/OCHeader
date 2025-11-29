@class AWEURLModel, AWESearchPOIRichSugModel, NSDictionary, AWESearchSugEntryTypeModel, AWEUserAccountCertInfoModel, AWESearchSugTabOrderModel, AWESearchSugIconTextModel, AWESearchEcomSliceSugModel, NSString, AWESearchEcomLynxSugModel, NSArray, AWESearchSugIconLayoutInfo, AWESearchTagText, NSNumber;

@interface AWESearchSugExtraModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *isRichSug;
@property (copy, nonatomic) NSString *certName;
@property (copy, nonatomic) NSString *remarkName;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *relationType;
@property (copy, nonatomic) NSString *matchType;
@property (copy, nonatomic) NSString *richSugType;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiLocationRecallLogId;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *tagType;
@property (retain, nonatomic) AWESearchSugIconTextModel *iconText;
@property (retain, nonatomic) AWESearchTagText *ecomCouponIcon;
@property (copy, nonatomic) NSString *clientServerExtra;
@property (copy, nonatomic) NSString *suggestTrackerExtra;
@property (copy, nonatomic) NSString *saleType;
@property (retain, nonatomic) AWEURLModel *tagIcon;
@property (retain, nonatomic) AWESearchSugIconLayoutInfo *tagIconInfo;
@property (copy, nonatomic) NSString *iconDesc;
@property (retain, nonatomic) AWEURLModel *tagIconLong;
@property (nonatomic) BOOL canUseLongTag;
@property (copy, nonatomic) NSArray *sugNavigationWords;
@property (copy, nonatomic) NSString *specialType;
@property (copy, nonatomic) NSString *tailType;
@property (copy, nonatomic) NSString *experQueryTag;
@property (copy, nonatomic) NSString *searchParamsString;
@property (retain, nonatomic) NSNumber *deepThink;
@property (nonatomic) unsigned long long ecomProductSug;
@property (nonatomic) unsigned long long ecommerceSugType;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (retain, nonatomic) AWESearchSugEntryTypeModel *entryType;
@property (retain, nonatomic) AWESearchSugTabOrderModel *tabOrder;
@property (retain, nonatomic) AWESearchPOIRichSugModel *poiRichSugModel;
@property (copy, nonatomic) NSArray *ecomInterveneQuerySpreadIds;
@property (retain, nonatomic) AWESearchEcomLynxSugModel *ecomLynxSugModel;
@property (copy, nonatomic) NSString *robotLink;
@property (copy, nonatomic) NSDictionary *guideImage;
@property (copy, nonatomic) NSDictionary *safeImage;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) AWESearchEcomSliceSugModel *ecomSearchSliceData;
@property (copy, nonatomic) NSString *targetTab;
@property (copy, nonatomic) NSString *targetTabType;
@property (copy, nonatomic) NSString *queryTab;
@property (copy, nonatomic) NSString *queryTabExp;
@property (copy, nonatomic) NSString *richSugTitle;
@property (copy, nonatomic) NSString *richSugSubTitle;
@property (copy, nonatomic) NSString *richSugStyle;
@property (copy, nonatomic) NSString *richSugHeaderImgURL;
@property (copy, nonatomic) NSString *richSugHeaderType;
@property (copy, nonatomic) NSString *richSugID;
@property (copy, nonatomic) NSString *richSugRouterType;
@property (copy, nonatomic) NSString *schemaClientEngineExtra;

+ (id)tagIconJSONTransformer;
+ (id)accountCertInfoJSONTransformer;
+ (id)tagIconInfoJSONTransformer;
+ (id)poiRichSugModelJSONTransformer;
+ (id)ecomLynxSugModelJSONTransformer;
+ (id)sugNavigationWordsJSONTransformer;
+ (id)entryTypeJSONTransformer;
+ (id)tabOrderJSONTransformer;
+ (id)iconTextJSONTransformer;
+ (id)ecomCouponIconJSONTransformer;
+ (id)ecomSearchSliceDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
