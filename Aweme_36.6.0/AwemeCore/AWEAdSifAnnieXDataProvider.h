@class NSDictionary, NSString;

@interface AWEAdSifAnnieXDataProvider : NSObject <AnnieXDataProviderProtocol>

@property (copy, nonatomic) NSDictionary *contextDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;
- (void)provideDefaultDataWithContext:(id)a0;
- (void)provideInstanceDataWitContext:(id)a0 schemaClass:(Class)a1;
- (id)fetchAweModelWithKey:(id)a0;
- (void)removeAweModelWithKey:(id)a0;
- (id)setAweModelWithSchema:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
