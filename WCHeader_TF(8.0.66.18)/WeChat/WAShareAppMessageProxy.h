@class NSString;

@interface WAShareAppMessageProxy : NSObject <IWAShareAppMessageProxyServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onWeAppStartToShareAppMessageWithShareAppMessagePlugin:(id)a0 reportPageEventPlugin:(id)a1;
+ (id)generateRecentForwardScrollViewHelper;


@end
