@class NSString;

@interface IESLiveInteractXplayDowngradeMixStreamTask : NSObject <IESLiveInteractXplayDowngradeTask>

@property (nonatomic) BOOL isMixFromClientToServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivate;
- (void)activate;
- (unsigned long long)identifier;

@end
