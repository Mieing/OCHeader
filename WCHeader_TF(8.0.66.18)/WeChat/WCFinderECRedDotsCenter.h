@class NSString;

@interface WCFinderECRedDotsCenter : NSObject <MMActionNotifyCommBizExt, WCFinderCardsEntryCenterExt>

@property (readonly, nonatomic) BOOL shouldSyncECRedDots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onEcInitForStartDone;
- (void)onGetBizId1:(long long)a0 data:(id)a1;
- (void)onFinderCardsEntryShouldShowChange;
- (BOOL)shouldRejectRedDot:(id)a0;

@end
