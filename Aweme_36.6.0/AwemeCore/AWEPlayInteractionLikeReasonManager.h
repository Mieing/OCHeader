@class BDXBridgeEventSubscriber;

@interface AWEPlayInteractionLikeReasonManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

+ (id)shareManager;

- (id)snackbarButtonText;
- (void)showLikeReasonBottomNotificationIfNeeded:(id)a0 referString:(id)a1;
- (double)snackbarDelayShowSecond;
- (void)p_showLikeReasonBottomNotificationIfNeeded:(id)a0 referString:(id)a1;
- (BOOL)shouldShowLikeReasonSnackBarWithModel:(id)a0;
- (id)snackbarMainContentText;
- (double)snackbarAutoDismissSecond;
- (BOOL)setLikeReasonSnackBarRecordWith:(id)a0 forKey:(id)a1;
- (void)snackBarDidClick:(id)a0 model:(id)a1 referString:(id)a2;
- (void)trackLikeBarClick:(id)a0 enterFrom:(id)a1 buttonName:(id)a2;
- (void)trackLikeBarShow:(id)a0 enterFrom:(id)a1;
- (void)unsubscribeAskLessEvent;
- (id)getLikeReasonSnackBarRecordForKey:(id)a0;
- (double)snackbarShowTimeLimit;
- (double)snackbarNotClickShowTimeLimit;
- (id)favPanelSchema;
- (void)subscribeAskLessEvent;
- (id)getLikeReasonSnackBarRecordKey;
- (id)feedLikeReasonConfig;
- (void).cxx_destruct;
- (void)reset;

@end
