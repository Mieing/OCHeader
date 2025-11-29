@class NSString;

@interface IESLocalLifeUIAlertServiceImpl : NSObject <IESLocalLifeUIAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)createAlertDialog;

@end
