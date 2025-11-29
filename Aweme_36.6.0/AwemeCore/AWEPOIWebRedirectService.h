@class NSArray, NSString;

@interface AWEPOIWebRedirectService : NSObject <AWERouterInterceptorDelegate>

@property (retain, nonatomic) NSArray *scanRedirectList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (BOOL)needRedirectSchema:(id)a0;
- (void)redirectRouterWithSchema:(id)a0;
- (void)showAlertWithModel:(id)a0;
- (BOOL)isOfflineScanJumpToUserProfileWithSchema:(id)a0 backupSchema:(id)a1;
- (void)trackEnterPersonalDetailWithSchema:(id)a0;
- (id)getQueryItems:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;

@end
