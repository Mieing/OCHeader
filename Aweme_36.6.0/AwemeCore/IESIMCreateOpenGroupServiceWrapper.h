@class NSString, NSObject;
@protocol IESIMCreateOpenGroupService;

@interface IESIMCreateOpenGroupServiceWrapper : NSProxy <IESIMCreateOpenGroupService>

@property (retain, nonatomic) NSObject<IESIMCreateOpenGroupService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
