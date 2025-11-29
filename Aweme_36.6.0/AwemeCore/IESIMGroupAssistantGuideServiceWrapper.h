@class NSString, NSObject;
@protocol IESIMGroupAssistantGuideService;

@interface IESIMGroupAssistantGuideServiceWrapper : NSProxy <IESIMGroupAssistantGuideService>

@property (retain, nonatomic) NSObject<IESIMGroupAssistantGuideService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
