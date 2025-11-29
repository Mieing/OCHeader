@class NSString;

@interface BDPMorePanelAddShortcutProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tryShowLynxExitPanel:(id)a0 completion:(id /* block */)a1;
+ (id)getMorePanelItemsWithUniqueID:(id)a0 extraInfo:(id)a1;
+ (id)getAddDesktopSettingsDictFrom:(long long)a0;
+ (id)getAddDesktopABDictFrom:(long long)a0;
+ (void)addShortWithUniqueID:(id)a0 completion:(id /* block */)a1;
+ (void)showLynxExitPanel:(id)a0 completion:(id /* block */)a1;
+ (void)canShowLynxExitPanel:(id)a0 completion:(id /* block */)a1;


@end
