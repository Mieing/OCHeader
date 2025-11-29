@interface AWEDCFeedNetworkConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL showNetNotConnectDirect;
@property (nonatomic) BOOL autoRefreshWhileEmptyWhenNetConnect;
@property (nonatomic) BOOL showNormalEmptyWhenPrivacyAlert;
@property (nonatomic) BOOL disableLoadMoreWhenPrivacyAlert;

- (void)setupDefaultConfig;

@end
