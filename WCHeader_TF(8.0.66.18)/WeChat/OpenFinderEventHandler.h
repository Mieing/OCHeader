@class NSString;

@interface OpenFinderEventHandler : OpenFinderBaseHandler <WCFinderEventViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)openEventPageFail:(id)a0;

@end
