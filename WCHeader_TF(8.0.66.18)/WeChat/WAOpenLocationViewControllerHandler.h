@class NSString;

@interface WAOpenLocationViewControllerHandler : NSObject <ViewLocationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSendLocationToFriendWithViewController:(id)a0;
- (BOOL)canShowShareLocationMsgToDevice;

@end
