@class NSString, NSObject;
@protocol IESIMGroupSpeakPermissionService;

@interface IESIMGroupSpeakPermissionServiceWrapper : NSProxy <IESIMGroupSpeakPermissionService>

@property (retain, nonatomic) NSObject<IESIMGroupSpeakPermissionService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
