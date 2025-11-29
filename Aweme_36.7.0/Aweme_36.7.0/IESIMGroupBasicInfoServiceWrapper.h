@class NSString, NSObject;
@protocol AWEIMGroupBasicInfoModuleService;

@interface IESIMGroupBasicInfoServiceWrapper : NSProxy <AWEIMGroupBasicInfoModuleService>

@property (retain, nonatomic) NSObject<AWEIMGroupBasicInfoModuleService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
