@class NSString, NSObject;
@protocol IESIMHeavyUserMonitorService;

@interface IESIMHeavyUserMonitorServiceWrapper : NSProxy <IESIMHeavyUserMonitorService>

@property (retain, nonatomic) NSObject<IESIMHeavyUserMonitorService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
