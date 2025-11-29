@class LLDitoGeneralContainerPageContext, NSString, NSHashTable;

@interface IESLLPOIDetailNGManager : NSObject <IESLLPOIDetailNGPopUpManagerProtocol>

@property (retain, nonatomic) NSHashTable *popupVCsArray;
@property (nonatomic) BOOL hasPOIDetailNGPopUpViewShowing;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
@property (nonatomic) BOOL hadShowLocationBar;
@property (nonatomic) BOOL hadShowSysLocationDialog;
@property (readonly, nonatomic) BOOL canShowLocationDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaWithPath:(id)a0 schema:(id)a1 byAddingQueryDict:(id)a2;
+ (id)poiLocationReqTriggerMsg;
+ (id)poiDetailLocationServiceConfig;
+ (id)poiDetailLocationServiceConfigWithMessage:(id)a0;
+ (id)reSplictCollectGuideSchema:(id)a0 cardType:(id)a1;
+ (id)sharedInstance;

- (BOOL)isShowPOIDetailInModalView;
- (void)dismissNGDetailViewController:(id)a0;
- (void)popupPOIDetailNGWithTransitionInfo:(id)a0;
- (void)recordDidShowLocationDialog;
- (id)detailNGBackgroundColor;
- (BOOL)viewInDetailNG:(id)a0;
- (BOOL)viewInDetailNG:(id)a0 loopCheck:(BOOL)a1;
- (id)sketchConfigRaw;
- (void)popupPOIDetailNGWithTargetViewController:(id)a0;
- (id)sketchConfig;
- (id)createRepoPOIModelFromDetail:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isModalView;

@end
