@class NSString;

@interface BDPMorePanelFeedbackProvider_HG : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMorePanelItemsWithUniqueID:(id)a0;
+ (void)openFeedbackController:(id)a0 customURL:(id)a1 common:(id)a2 scene:(id)a3;
+ (id)appendEnterSourceIfNeeded:(id)a0 toURLString:(id)a1;


@end
