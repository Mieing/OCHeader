@class IESECMallShopMomentContext, NSString, IESECListKitSharedData;

@interface IESECMallShopMomentJSBService : NSObject <IESECMallShopMomentJSBService>

@property (retain, nonatomic) IESECListKitSharedData *sharedData;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxCardBridgeList;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
