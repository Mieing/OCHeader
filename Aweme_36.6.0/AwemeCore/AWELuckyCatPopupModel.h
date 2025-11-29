@class NSString, AWELuckyCatPopupUIModel, NSDictionary, AWELuckyCatPopupManageInfo, NSNumber;

@interface AWELuckyCatPopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *reportPopUrl;
@property (retain, nonatomic) AWELuckyCatPopupUIModel *uiInfo;
@property (retain, nonatomic) AWELuckyCatPopupManageInfo *manageInfo;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSNumber *popDelay;
@property (copy, nonatomic) NSString *noStdPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiInfoJSONTransformer;
+ (id)manageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
