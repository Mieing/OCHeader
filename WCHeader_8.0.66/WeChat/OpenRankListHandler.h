@class NSString, NSURL, MMUINavigationController, OpenApiParameter;

@interface OpenRankListHandler : MMObject <WCShareAuthViewControllerDelegate, IPreEnterWechatLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandle:(id)a0;
- (void)startAuth;
- (void)cancelOpenRankList;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)openRankList;
- (void)onPreEnterWechatDone;
- (void)doAuth;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (void)removeAuthViewController;
- (void).cxx_destruct;

@end
