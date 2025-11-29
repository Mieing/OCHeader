@class NSString, NSObject;
@protocol IESIMGroupAssistantSkillService;

@interface IESIMGroupAssistantSkillServiceWrapper : NSProxy <IESIMGroupAssistantSkillService>

@property (retain, nonatomic) NSObject<IESIMGroupAssistantSkillService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
