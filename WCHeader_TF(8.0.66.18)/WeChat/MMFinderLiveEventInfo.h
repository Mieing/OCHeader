@class NSString;

@interface MMFinderLiveEventInfo : NSObject

@property (nonatomic) unsigned int eventId;
@property (nonatomic) unsigned int participantIdentity;
@property (nonatomic) unsigned int eventStatus;
@property (nonatomic) unsigned int streamStatus;
@property (retain, nonatomic) NSString *eventToken;

- (void)updateWithFinderLiveEventInfo:(id)a0;
- (void)updateWithFinderLiveAudienceEventInfo:(id)a0;
- (id)genFinderEventInfo;
- (void).cxx_destruct;

@end
