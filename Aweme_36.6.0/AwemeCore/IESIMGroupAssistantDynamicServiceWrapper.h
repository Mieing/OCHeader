@class NSString, NSObject;
@protocol IESIMGroupAssistantDynamicService;

@interface IESIMGroupAssistantDynamicServiceWrapper : NSProxy <IESIMGroupAssistantDynamicService>

@property (retain, nonatomic) NSObject<IESIMGroupAssistantDynamicService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
