@class NSString;

@interface BDPMorePanelAboutProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)getMorePanelItemsWithUniqueID:(id)a0;


@end
