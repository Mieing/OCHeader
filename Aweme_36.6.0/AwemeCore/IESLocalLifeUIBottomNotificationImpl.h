@class NSString;

@interface IESLocalLifeUIBottomNotificationImpl : NSObject <IESLLBottomNotificationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAWEPlayInteractionSnackBarWithIdentifier:(id)a0;
- (id)createAWEPlayInteractionSnackBar;

@end
