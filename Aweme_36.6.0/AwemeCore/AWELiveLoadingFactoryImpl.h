@class NSString;

@interface AWELiveLoadingFactoryImpl : NSObject <IESLiveLoadingFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showLoadingOnView:(id)a0;
- (void)dismissWindowLoading;
- (void)showWindowLoadingWithTitle:(id)a0;

@end
