@class IESECMallCategoryTabAreaInfoModel, IESECListKitLynxCardModel, IESECListKitPendantListModel, NSDictionary, NSString, IESECListKitBackgroundModel, IESECListKitListModel;

@interface IESECMallListKitBffDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitListModel *feed;
@property (retain, nonatomic) IESECListKitLynxCardModel *topBar;
@property (retain, nonatomic) IESECListKitLynxCardModel *skylight;
@property (retain, nonatomic) IESECListKitBackgroundModel *background;
@property (retain, nonatomic) IESECListKitLynxCardModel *popup;
@property (retain, nonatomic) IESECListKitPendantListModel *pendant;
@property (retain, nonatomic) IESECMallCategoryTabAreaInfoModel *categoryTab;
@property (copy, nonatomic) NSDictionary *bizInfo;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSDictionary *dynamicParams;
@property (copy, nonatomic) NSDictionary *feedDigest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupJSONTransformer;
+ (id)feedJSONTransformer;
+ (id)topBarJSONTransformer;
+ (id)backgroundJSONTransformer;
+ (id)skylightJSONTransformer;
+ (id)pendantJSONTransformer;
+ (id)categoryTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
