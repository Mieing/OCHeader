@class CJPayServiceDescPopup, NSString, CJPayDyPayMultiSignInfo, NSArray, CJPaySignAssetInfoModel, QueryMemberPayTypeItem;
@protocol CJPaySignAssetInfoModel, QueryMemberPayTypeItem;

@interface CJPaySignInformation : JSONModel

@property (copy, nonatomic) NSString *signTitleURL;
@property (copy, nonatomic) NSString *logoURL;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) CJPayServiceDescPopup *serviceDescPopup;
@property (copy, nonatomic) NSString *merchantNameTitle;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *serviceDescribeTitle;
@property (copy, nonatomic) NSString *serviceDescribe;
@property (copy, nonatomic) NSString *serviceShortDesc;
@property (retain, nonatomic) CJPayDyPayMultiSignInfo *multiSignInfo;
@property (copy, nonatomic) NSString *signPageDescImg;
@property (copy, nonatomic) NSArray<QueryMemberPayTypeItem> *payTypeList;
@property (copy, nonatomic) NSString *deductMethodTitle;
@property (copy, nonatomic) NSString *deductMethodSubDesc;
@property (copy, nonatomic) NSString *openUserTitle;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *templateId;
@property (retain, nonatomic) QueryMemberPayTypeItem *firstPayTypeItem;
@property (copy, nonatomic) NSString *activeTick;
@property (copy, nonatomic) NSArray<CJPaySignAssetInfoModel> *assetInfoModelList;
@property (retain, nonatomic) CJPaySignAssetInfoModel *firstAssetInfoModel;
@property (copy, nonatomic) NSString *backgroundStyle;
@property (copy, nonatomic) NSString *halfPageMainTitle;
@property (copy, nonatomic) NSString *screenStyle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
