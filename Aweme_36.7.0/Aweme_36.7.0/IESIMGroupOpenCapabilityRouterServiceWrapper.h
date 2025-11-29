@class NSString, NSObject;
@protocol IESIMGroupOpenCapabilityRouterService;

@interface IESIMGroupOpenCapabilityRouterServiceWrapper : NSProxy <IESIMGroupOpenCapabilityRouterService>

@property (retain, nonatomic) NSObject<IESIMGroupOpenCapabilityRouterService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
