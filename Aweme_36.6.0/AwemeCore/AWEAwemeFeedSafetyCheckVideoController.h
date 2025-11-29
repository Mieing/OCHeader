@class NSString, AWEFeedVideoSafetyCheckHandler;

@interface AWEAwemeFeedSafetyCheckVideoController : AWEAwemeFeedBaseController <AWEFeedSafetyCheckContainerMessage>

@property (retain, nonatomic) AWEFeedVideoSafetyCheckHandler *safetyCheckHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteFeedUnsafeItems:(id)a0 referString:(id)a1;
- (void)handleVideoSafetyPreCheckNotification:(id)a0;
- (void)handleVideoPrivacyCheckNotification:(id)a0;
- (void)handleVideoSafetyPreCheckWithResults:(id)a0 error:(id)a1 isCurrentModel:(BOOL)a2;
- (void)showTopBarLoading;
- (void)trackShowDrawBackCellWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
