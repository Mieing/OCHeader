@class NSString, UIViewController;

@interface DTFUICustom : NSObject <DTFUICustomProtocol>

@property (retain, nonatomic) id userCustomProtocol;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
