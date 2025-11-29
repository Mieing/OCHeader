@class NSString, NSDictionary, NSObject;
@protocol AWEPOISearchLynxServiceProtocol;

@interface AWETemplatePOIViewModel : AWETemplateBaseViewModel <AFDAwemePermissionMessage>

@property (retain, nonatomic) NSObject<AWEPOISearchLynxServiceProtocol> *searchLynxServiceManager;
@property (nonatomic) long long poiStyleType;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *tailButtonText;
@property (nonatomic) long long frequencyShowTime;
@property (nonatomic) long long frequencyClickTime;
@property (copy, nonatomic) NSString *mainContentLeftText;
@property (copy, nonatomic) NSString *mainContentRightText;
@property (copy, nonatomic) NSDictionary *poiPatchParams;
@property (copy, nonatomic) NSDictionary *poiInfo;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;

- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackBarShow;
- (void)trackBarClick;
- (void)viewController_viewWillDisplay;
- (void)didInitialized;
- (void)preprocessBarModel;
- (BOOL)showTailButton;
- (void)supplementPoiInfoWithModel:(id)a0;
- (void)requestToSupplement;
- (void)barClickRecord;
- (void)openPoiList;
- (void)barShowRecord;
- (void)trackPatchSuccessWithPoiId:(id)a0;
- (id)awemeAndUserRelatedKeyForShow;
- (void)frequencyEventAskWithType:(long long)a0;
- (id)awemeAndUserRelatedKeyForClick;
- (id)awemeAndUserRelatedKey;
- (void).cxx_destruct;
- (void)dealloc;
- (id)interactionContext;

@end
