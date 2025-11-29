@class NSString;

@interface AWETeenPureModePageLongPressController : AWEBaseController <AWETeenPureModePageControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)handleLongPressGesture:(id)a0;

@end
