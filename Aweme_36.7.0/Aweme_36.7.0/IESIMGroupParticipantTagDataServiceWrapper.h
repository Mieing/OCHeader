@class NSString, NSObject;
@protocol IESIMGroupParticipantTagDataService;

@interface IESIMGroupParticipantTagDataServiceWrapper : NSProxy <IESIMGroupParticipantTagDataService>

@property (retain, nonatomic) NSObject<IESIMGroupParticipantTagDataService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
