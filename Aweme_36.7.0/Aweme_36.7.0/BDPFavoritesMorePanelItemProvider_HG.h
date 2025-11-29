@class NSString;

@interface BDPFavoritesMorePanelItemProvider_HG : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleRemoveResultEvent:(id)a0 type:(long long)a1 success:(BOOL)a2;
+ (void)handleAddResultEvent:(id)a0 type:(long long)a1 success:(BOOL)a2 isFirst:(BOOL)a3;
+ (id)getMorePanelItemsWithUniqueID:(id)a0;


@end
