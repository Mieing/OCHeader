@class NSString, AWEEnterpriseMarketingToolsCheckResponseModel;
@protocol AWEHttpTask;

@interface AWEEnterprisePublishComponentService : HTSService <AWEUserMessage, AWEEnterprisePublishComponentService>

@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (retain, nonatomic) AWEEnterpriseMarketingToolsCheckResponseModel *marketingToolsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)bubbleTools;
- (id)companyToolsBubbleContainerCell;
- (BOOL)hasMarketingToolsCheck;
- (id)accessLableText;
- (void)showSelectCompanyToolsWithTrackParams:(id)a0 clickFrom:(id)a1;
- (void)fetchEnterpriseComponentIfNeededWithCompletion:(id /* block */)a0;
- (void)addMarketingTool:(id)a0 completion:(id /* block */)a1;
- (void)saveDouGuideInfoWithLinkType:(long long)a0;
- (BOOL)isBubbleToolShownBefore:(id)a0;
- (void)saveShownBubbleTools:(id)a0;
- (void)p_updateMarketingToolsModels:(id)a0;
- (id)p_selectCompanyCouponSchema;
- (void).cxx_destruct;
- (void)dealloc;

@end
