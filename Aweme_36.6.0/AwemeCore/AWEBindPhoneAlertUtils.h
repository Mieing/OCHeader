@class NSString;

@interface AWEBindPhoneAlertUtils : NSObject <AWEBindPhoneAlertUtilsProtocol, AWEAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldForbidWartermarkWhenDownloadAweme;
+ (BOOL)isSelfSeeWhenPostAmeme;
+ (BOOL)shouldShowAlertInFeed;
+ (void)showAlertWhenLogoutIfNeed:(id /* block */)a0;
+ (id)enterFromWithBindPhoneAlertType:(unsigned long long)a0;
+ (BOOL)shouldShowAlertFromPrivateToPublic;
+ (BOOL)_shouldForbidWartermarkWhenDownloadAweme;
+ (BOOL)_isSelfSeeWhenPostAmeme;
+ (BOOL)_isSuccessOrSelfSeeWhenPostAmeme;
+ (void)showAlertInFeedIfNeed;
+ (BOOL)isSuccessOrSelfSeeWhenPostAmeme;
+ (BOOL)shouldShowAlertInUserDetail;
+ (id)sharedInstance;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;

@end
