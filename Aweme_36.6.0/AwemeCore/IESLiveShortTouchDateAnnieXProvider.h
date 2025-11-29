@class NSString;

@interface IESLiveShortTouchDateAnnieXProvider : NSObject <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;

@end
