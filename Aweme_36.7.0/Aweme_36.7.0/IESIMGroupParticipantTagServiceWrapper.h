@class NSString, NSObject;
@protocol IESIMGroupParticipantTagService;

@interface IESIMGroupParticipantTagServiceWrapper : NSProxy <IESIMGroupParticipantTagService>

@property (retain, nonatomic) NSObject<IESIMGroupParticipantTagService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
