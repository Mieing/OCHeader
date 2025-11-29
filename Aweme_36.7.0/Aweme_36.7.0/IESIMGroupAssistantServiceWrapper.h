@class NSString, NSObject;
@protocol IESIMGroupAssistantService;

@interface IESIMGroupAssistantServiceWrapper : NSProxy <IESIMGroupAssistantService>

@property (retain, nonatomic) NSObject<IESIMGroupAssistantService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
