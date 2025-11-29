@class AWEShareWebMetaCutScreenInfo, NSString, NSArray, NSURL, NSDictionary, AWEShareWebMetaCommandCustomShareConfig, AWEShareWebMetaCustomMobEventMap;

@interface AWEShareWebMetadataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *tipsForCopy;
@property (copy, nonatomic) NSString *belong;
@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *localImageIdentifier;
@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) NSURL *reportUrl;
@property (retain, nonatomic) NSURL *reportSchema;
@property (retain, nonatomic) NSURL *internalURL;
@property (nonatomic) BOOL usesOriginalURL;
@property (nonatomic) BOOL showsQRCode;
@property (nonatomic) BOOL hidesIMContacts;
@property (nonatomic) BOOL hidesActionItems;
@property (copy, nonatomic) NSString *activityScene;
@property (nonatomic) BOOL showsSecondLineForQRCode;
@property (copy, nonatomic) NSArray *customShareItems;
@property (copy, nonatomic) NSArray *customActionItems;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *activitySlogan;
@property (copy, nonatomic) NSString *smallIconUrl;
@property (copy, nonatomic) NSString *bigPicUrl;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *msgTrack;
@property (copy, nonatomic) NSString *uiExtra;
@property (copy, nonatomic) NSString *bgURL;
@property (copy, nonatomic) NSString *imImageUrl;
@property (copy, nonatomic) NSString *webUrlV2;
@property (copy, nonatomic) NSString *webUrlV2Version;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) BOOL hideBottomTips;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) BOOL onceClose;
@property (copy, nonatomic) NSString *excludeGroupType;
@property (nonatomic) BOOL topVCCloseOnCallback;
@property (nonatomic) BOOL disableForward;
@property (retain, nonatomic) AWEShareWebMetaCommandCustomShareConfig *customCommandConfig;
@property (retain, nonatomic) AWEShareWebMetaCustomMobEventMap *customMobEventMap;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (copy, nonatomic) NSArray *shareEntriesForbidList;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSDictionary *liveShareExtraParams;
@property (copy, nonatomic) NSString *customParams;
@property (nonatomic) BOOL hideMask;
@property (retain, nonatomic) AWEShareWebMetaCutScreenInfo *cutScreenInfo;
@property (retain, nonatomic) NSDictionary *checkBoxConfig;
@property (copy, nonatomic) NSString *takeBlessingVideoURL;
@property (copy, nonatomic) NSArray *qrcodeForbidChannels;
@property (retain, nonatomic) NSDictionary *trackExtParams;
@property (copy, nonatomic) NSString *scene;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)boolValueTransformer;
+ (id)usesOriginalURLJSONTransformer;
+ (id)showsQRCodeJSONTransformer;
+ (id)hidesIMContactsJSONTransformer;
+ (id)hidesActionItemsJSONTransformer;
+ (id)aweTypeJSONTransformer;
+ (id)customShareItemsJSONTransformer;
+ (id)customActionItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
