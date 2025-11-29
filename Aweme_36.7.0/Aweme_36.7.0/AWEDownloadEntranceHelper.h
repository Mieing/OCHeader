@class NSString;

@interface AWEDownloadEntranceHelper : NSObject <AWEDownloadEntranceHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDownloadAllowedWithContext:(id)a0;
+ (BOOL)checkDownloadPermissionAfterClickedWithContext:(id)a0;
+ (BOOL)shouldGrayedDownloadItemInSharePanelWithContext:(id)a0;
+ (BOOL)shouldHideDownloadItemInSharePanelWithContext:(id)a0;
+ (void)p_recordControlServerDiffWithMessage:(id)a0;
+ (void)trackDownloadSecurityCheckWithContext:(id)a0;


@end
