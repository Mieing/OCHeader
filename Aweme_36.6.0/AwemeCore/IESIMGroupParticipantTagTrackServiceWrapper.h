@class NSString, NSObject;
@protocol IESIMGroupParticipantTagTrackService;

@interface IESIMGroupParticipantTagTrackServiceWrapper : NSProxy <IESIMGroupParticipantTagTrackService>

@property (retain, nonatomic) NSObject<IESIMGroupParticipantTagTrackService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
