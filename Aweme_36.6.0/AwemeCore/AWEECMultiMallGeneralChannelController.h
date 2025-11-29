@class NSString, IESECMallCategoryTabInfoModel, NSDate, AWEECGeneralMallViewController, AWEECMultiMallContainerModel;

@interface AWEECMultiMallGeneralChannelController : NSObject <AWEECMultiMallChannelProtocol>

@property (retain, nonatomic) AWEECGeneralMallViewController *generalMallVC;
@property (retain, nonatomic) IESECMallCategoryTabInfoModel *tabInfo;
@property (weak, nonatomic) AWEECMultiMallContainerModel *contextModel;
@property (copy, nonatomic) NSDate *enterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)commonTrackParams;
- (id)getContainerConfig;
- (void)updateMallConfig:(id)a0;
- (void)enterChannelWithModel:(id)a0;
- (void)leaveChannelWithModel:(id)a0;
- (id)initWithTabInfo:(id)a0 context:(id)a1;
- (void)updateTabInfo:(id)a0;
- (BOOL)isHybirdButNotRecommendChannel;
- (BOOL)isRecommendChannel;
- (void)prefetchTemplateDataIfNeeded;
- (void)prefetchBizDataIfNeeded;
- (void)tryOpenDeliveryOpen;
- (void)trackEnterChannel:(id)a0;
- (void)trackLeaveChannel:(id)a0;
- (void).cxx_destruct;
- (id)getContainer;

@end
