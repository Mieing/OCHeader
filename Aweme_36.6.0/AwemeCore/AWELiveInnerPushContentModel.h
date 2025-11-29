@class AWEInnerPushControlModel, NSString, AWELiveInnerPushExtendedModel, NSDictionary, UIView, NSNumber, AWELiveInnerPushExemptModel;
@protocol AWELiveUserAvatarPreviewProtocol;

@interface AWELiveInnerPushContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isPulled;
@property (retain, nonatomic) AWELiveInnerPushExemptModel *exemptModel;
@property (retain, nonatomic) AWELiveInnerPushExtendedModel *extraModel;
@property (copy, nonatomic) NSString *businessType;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (copy, nonatomic) NSDictionary *payload;
@property (copy, nonatomic) NSDictionary *ttpushEventExtra;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> previewManager;
@property (nonatomic) long long previewOptType;
@property (nonatomic) BOOL didShow;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *extraStr;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)extendedModelFromJsonString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)enterFrom;
- (id)enterMethod;
- (id)extraParams;
- (id)enterFromMerge;
- (BOOL)enablePreview;
- (void)addQueryValue:(id)a0 forKey:(id)a1;
- (void)addInformationForOpenUrl:(id)a0;
- (id)getURLQueryValueWithURL:(id)a0 queryKey:(id)a1;
- (id)liveReason;
- (void).cxx_destruct;
- (id)pushType;

@end
