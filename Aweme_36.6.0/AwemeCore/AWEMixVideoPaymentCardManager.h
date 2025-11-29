@class NSString;

@interface AWEMixVideoPaymentCardManager : NSObject <AWEFeedDynamicCardManagerProtocol>

@property (nonatomic) BOOL videoHasPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPaymentPopupWithMixModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;

- (void)container:(id)a0 viewDidAppearWithContext:(id)a1 onFirstScreen:(BOOL)a2;
- (void)container:(id)a0 viewDidDisappearWithContext:(id)a1;
- (void)container:(id)a0 viewHasBecomeActiveWithContext:(id)a1;
- (void)container:(id)a0 viewHasEnterBackgroundWithContext:(id)a1;
- (void)container:(id)a0 hasReadyWithContext:(id)a1;
- (void)container:(id)a0 videoPlayWithContext:(id)a1;
- (void)container:(id)a0 beforeUpdateData:(id)a1 extraParams:(id)a2;
- (void)refreshMixFeedDataForMixID:(id)a0;
- (void)checkVideoShouldUnlock:(id)a0;

@end
