@class NSString;

@interface IESGCPGameDetailDataAnnieXProvider : AnnieXLiveDataProviderManager <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (Class)schemaClass;

@end
