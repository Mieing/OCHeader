@class NSString;

@interface IESLiveECAccessorImpl : NSObject <IESLiveECAccessorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordMegaObject:(id)a0 withKey:(id)a1;
- (id)megaObjectWithKey:(id)a0;

@end
