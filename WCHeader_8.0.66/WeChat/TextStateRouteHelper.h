@interface TextStateRouteHelper : NSObject

+ (id)showPublishWithSourceInfo:(id)a0 delegate:(id)a1 viewController:(id)a2;
+ (id)showPublishWithSourceInfo:(id)a0 delegate:(id)a1 viewController:(id)a2 forceFullScreen:(BOOL)a3;
+ (id)showPublishWithSourceInfo:(id)a0 scene:(unsigned int)a1 configuration:(id)a2 attachInfo:(id)a3 delegate:(id)a4 viewController:(id)a5 forceFullScreen:(BOOL)a6;
+ (BOOL)isSupportedThirdPartyType:(id)a0;
+ (void)followTextStateFromContact:(id)a0 viewController:(id)a1;
+ (void)directPublishNoMediaTextStateWithSourceInfo:(id)a0;
+ (void)directPublishNoMediaTextStateWithSourceInfo:(id)a0 mediaItem:(id)a1;
+ (void)navigateToPOI:(id)a0 currentViewController:(id)a1;
+ (void)navigateToPOIWithJumpRequest:(id)a0 currentViewController:(id)a1;
+ (id)createPublishUseCase:(id)a0 cardReporter:(id)a1;
+ (void)showCommentListViewController:(id)a0 curViewController:(id)a1 cardReporter:(id)a2;
+ (void)showLikeListHalfPage:(id)a0 curViewController:(id)a1;
+ (void)showGroupShareScopePaage:(id)a0 curViewController:(id)a1 cardReporter:(id)a2;

@end
