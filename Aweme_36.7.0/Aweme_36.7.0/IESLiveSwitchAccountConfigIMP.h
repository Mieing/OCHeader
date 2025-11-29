@class NSString;

@interface IESLiveSwitchAccountConfigIMP : NSObject <IESLiveToolbarComponentHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)setupSwitchItemWithInitialItem:(id)a0;

@end
