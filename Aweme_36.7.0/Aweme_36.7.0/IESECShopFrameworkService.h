@class NSString;
@protocol IESECShopFrameworkAdapter;

@interface IESECShopFrameworkService : IESECShopService <IESECShopFrameworkService>

@property (copy, nonatomic) NSString *frameworkType;
@property (retain, nonatomic) id<IESECShopFrameworkAdapter> adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterRegisterMap;

@end
