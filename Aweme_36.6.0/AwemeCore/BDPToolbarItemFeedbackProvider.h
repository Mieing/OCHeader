@class NSString;

@interface BDPToolbarItemFeedbackProvider : NSObject <BDPToolbarItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAction:(id)a0 view:(id)a1;


@end
