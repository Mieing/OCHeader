@class NSString, NSObject;
@protocol IESIMGroupParticipantController;

@interface IESIMGroupParticipantControllerWrapper : NSProxy <IESIMGroupParticipantController>

@property (retain, nonatomic) NSObject<IESIMGroupParticipantController> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
