@class WCWeAppBizTempSessionInfo, WAPermissionHandler;
@protocol WCWeAppBizTempSessionHelperDelegate;

@interface WCWeAppBizTempSessionHelper : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) WCWeAppBizTempSessionInfo *bizInfo;
@property (retain, nonatomic) WAPermissionHandler *permissionHandler;
@property (weak, nonatomic) id<WCWeAppBizTempSessionHelperDelegate> delegate;

- (void)dealloc;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)a0;
- (void)enterContact;
- (void)enterSessionWithBizInfo:(id)a0;
- (void)requestWithBusinessID:(id)a0;
- (void)onGetSubBusinessInfoResponse:(id)a0;
- (void)enterBizTempSessionWithInfo:(id)a0 callback:(id /* block */)a1;
- (void)enterBizTempSessionWithInfo:(id)a0 contact:(id)a1 callback:(id /* block */)a2;
- (void)startLoadingView;
- (void)stopLoadingView;
- (void)didJumpToTempSession:(id)a0;
- (void)endWithSuccess:(id)a0;
- (void)endWithError:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
