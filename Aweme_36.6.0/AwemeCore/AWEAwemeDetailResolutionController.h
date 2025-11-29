@class NSString;

@interface AWEAwemeDetailResolutionController : AWEAwemeNewDetailBaseController <AWEPlayerResolutionGearTypeChangedMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changedGearType:(unsigned long long)a0 enterFrom:(id)a1 model:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;

@end
