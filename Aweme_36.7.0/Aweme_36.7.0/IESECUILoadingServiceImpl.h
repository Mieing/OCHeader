@class NSString;

@interface IESECUILoadingServiceImpl : NSObject <IESECUILoadingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLoadingView:(id)a0;
+ (id)showLoadingOnView:(id)a0;
+ (void)dismissWindowLoading;
+ (id)showWindowLoading;
+ (id)showWindowLoadingWithTitle:(id)a0;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)a0;


@end
