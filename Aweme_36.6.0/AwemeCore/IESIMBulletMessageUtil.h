@class NSString;

@interface IESIMBulletMessageUtil : NSObject <IESIMBulletMessageUtilInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestShareMessageContentMessageType:(id)a0 aweType:(id)a1 params:(id)a2 completionBlock:(id /* block */)a3;
- (void)trySetBulletContentStorage:(id)a0 withMessage:(id)a1 extra:(id)a2 completion:(id /* block */)a3;

@end
