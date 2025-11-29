@class NSString;

@interface BDPMorePanelClearCacheProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMorePanelItemsWithUniqueID:(id)a0;
+ (void)trackClickWithUniqueID:(id)a0;
+ (void)trackResultWithUniqueID:(id)a0 result:(id)a1;


@end
