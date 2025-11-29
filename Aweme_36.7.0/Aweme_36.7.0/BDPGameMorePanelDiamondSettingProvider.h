@class NSString;

@interface BDPGameMorePanelDiamondSettingProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMorePanelItemsWithUniqueID:(id)a0;
+ (void)fetchDiamondSettingVisible:(id)a0;
+ (id)getMorePanelItem:(id)a0 data:(id)a1;
+ (id)backupDiamondSettingSchema;
+ (id)schemaQuery:(id)a0;
+ (void)showMorePanelItem:(id)a0 data:(id)a1;


@end
