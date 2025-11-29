@class NSString;

@interface AWEGrouponChannelCacheDataProvider : NSObject <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (Class)schemaClassWithContainerType:(id)a0 engineType:(id)a1;
- (void)provideInstanceDataWitContext:(id)a0 schemaClass:(Class)a1;

@end
