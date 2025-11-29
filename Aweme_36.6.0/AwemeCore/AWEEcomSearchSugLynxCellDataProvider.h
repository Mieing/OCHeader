@class NSString;

@interface AWEEcomSearchSugLynxCellDataProvider : NSObject <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)itemConfigWithSugType:(id)a0;
+ (id)schemaWithSugType:(id)a0;
+ (id)itemHeightWithSugType:(id)a0;
+ (id)settingsDict;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:(id)a0;

@end
