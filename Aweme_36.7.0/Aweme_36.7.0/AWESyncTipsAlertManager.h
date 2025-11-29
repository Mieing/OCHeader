@class NSString;

@interface AWESyncTipsAlertManager : NSObject <AWESyncTipsAlertManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tipsVersion;
+ (id)tipsVersionHasShown;
+ (void)showSyncTipsAlertWithActionBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
+ (BOOL)shouldShowSyncTipsAlert;


@end
