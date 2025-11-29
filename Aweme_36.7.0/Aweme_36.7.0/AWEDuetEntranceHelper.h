@class NSString;

@interface AWEDuetEntranceHelper : NSObject <AWEDuetEntranceHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldHideDuetItemInSharePanelWithContext:(id)a0;
+ (BOOL)shouldGrayedDuetItemInSharePanelWithContext:(id)a0;
+ (BOOL)isDuetAllowedWithContext:(id)a0;
+ (BOOL)checkDuetPermissionAfterClickedWithContext:(id)a0;
+ (BOOL)duetSecurityCheckWithContext:(id)a0;


@end
