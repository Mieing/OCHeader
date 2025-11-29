@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageNavigationBarHandler : NSObject <AWEPostPageNavigationBarService>

@property (nonatomic) long long backButtonDidClickSignal;
@property (nonatomic) long long draftCancelButtonDidClickSignal;
@property (nonatomic) long long previewButtonDidClickSignal;
@property (nonatomic) long long cancelButtonDidClickSignal;
@property (nonatomic) long long finishButtonDidClickSignal;
@property (nonatomic) long long draftButtonDidClickSignal;
@property (nonatomic) long long publishButtonDidClickSignal;
@property (nonatomic) long long publishFriendsDailyButtonDidClickSignal;
@property (nonatomic) long long switchInputButtonDidClickSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)sendBackButtonDidClickSignal;
- (void)sendDraftCancelButtonDidClickSignal;
- (void)sendPreviewButtonDidClickSignal;
- (void)sendCancelButtonDidClickSignal;
- (void)sendFinishButtonDidClickSignal;
- (void)sendDraftButtonDidClickSignal;
- (void)sendPublishButtonDidClickSignal;
- (void)sendPublishFriendsDailyButtonDidClickSignal;
- (void)sendSwitchInputButtonDidClickSignal;
- (void).cxx_destruct;

@end
