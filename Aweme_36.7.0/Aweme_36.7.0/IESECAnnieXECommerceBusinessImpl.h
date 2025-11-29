@class NSString;

@interface IESECAnnieXECommerceBusinessImpl : NSObject <BDXContainerLifecycleProtocol, AnnieXDataProviderProtocol>

@property (nonatomic) BOOL isHeaderRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

@end
