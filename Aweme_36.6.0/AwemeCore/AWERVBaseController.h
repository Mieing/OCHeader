@class NSString;

@interface AWERVBaseController : AWEBaseController <AWERVControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterMethod;
- (id)containerViewModel;
- (id)currentPlayModel;
- (id)containerVC;
- (id)originAwemeModel;
- (id)containerScrollView;
- (id)videoViewController;

@end
