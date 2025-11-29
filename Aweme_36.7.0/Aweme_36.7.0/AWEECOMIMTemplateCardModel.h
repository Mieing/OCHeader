@class AWEECOMIMLynxTemplateCardViewModel, NSString, NSDictionary, BDPCDDynamicCardParserConfig, BDPCDDynamicCardTemplateModel, IESIMBulletContainerPreLayoutInfo;

@interface AWEECOMIMTemplateCardModel : AWEECOMIMBaseMsgModel <IESIMBulletContainerPreloadItemProtocol>

@property (copy, nonatomic) NSDictionary *dynamicData;
@property (nonatomic, getter=isSystemMsgStyle) BOOL systemMsgStyle;
@property (nonatomic) BOOL isLastElementFootTips;
@property (nonatomic) long long supportSDKVersion;
@property (retain, nonatomic) BDPCDDynamicCardParserConfig *config;
@property (retain, nonatomic) AWEECOMIMLynxTemplateCardViewModel *lynxViewViewModel;
@property (nonatomic) BOOL shouldBackupToLynx;
@property (copy, nonatomic) NSDictionary *backupLynxConfig;
@property (copy, nonatomic) NSString *forceShowUnsupportStr;
@property (retain, nonatomic) BDPCDDynamicCardTemplateModel *templateModel;
@property (copy, nonatomic) id /* block */ onDidFetchDynamicData;
@property (nonatomic) long long preLayoutStatus;
@property (nonatomic) long long fullLoadStatus;
@property (retain, nonatomic) IESIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (nonatomic) BOOL needSkipPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementHelper;
+ (Class)cellClass;

- (id)msgCommonTrackParams;
- (id)getPathForTemplateCardHttpRequest:(id)a0;
- (id)msgDisplayParams;
- (id)realMessageTypeWithMessage:(id)a0;
- (id)configCardFootTextLayoutWithMessage:(id)a0;
- (id)realCardTypeWithMessage:(id)a0;
- (void)generateTemplateModel;
- (long long)preloadStrategyWithScene:(long long)a0;
- (id)dynamicPatchForPreload;
- (id)bulletContextForPreload;
- (void)fetchDynamicDataWithExtraBody:(id)a0 extraParams:(id)a1 extraHeader:(id)a2;
- (void)trackErrorWithParams:(id)a0;
- (id)backupLynxConfigWithCardHeader:(id)a0 bizType:(id)a1;
- (id)configAfterSaleProgressCardFootTextLayoutWithMessage:(id)a0;
- (id)configComplexCardFootTextLayoutWithMessage:(id)a0;
- (id)requestExtensionString;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (id)initWithMessage:(id)a0;

@end
