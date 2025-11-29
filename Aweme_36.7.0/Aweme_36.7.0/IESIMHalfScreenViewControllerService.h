@class NSString;

@interface IESIMHalfScreenViewControllerService : HTSService <IESIMHalfScreenViewControllerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createHalfScreenViewController;
- (void)presentMyLikeViewControllerWithParams:(id)a0;

@end
