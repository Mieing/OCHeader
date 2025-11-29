@class NSString;

@interface BDUGLuckyContainerDataProviderManager : NSObject <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;

- (Class)schemaClassWithContainerType:(id)a0 engineType:(id)a1;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;

@end
