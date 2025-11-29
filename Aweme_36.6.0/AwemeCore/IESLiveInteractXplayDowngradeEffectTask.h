@class NSString;

@interface IESLiveInteractXplayDowngradeEffectTask : NSObject <IESLiveInteractXplayDowngradeTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivate;
- (void)activate;
- (unsigned long long)identifier;

@end
