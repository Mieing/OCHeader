@class NSString, NSObject;
@protocol IESIMGroupOpenCapabilityNativeService;

@interface IESIMGroupOpenCapabilityNativeServiceWrapper : NSProxy <IESIMGroupOpenCapabilityNativeService>

@property (retain, nonatomic) NSObject<IESIMGroupOpenCapabilityNativeService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
