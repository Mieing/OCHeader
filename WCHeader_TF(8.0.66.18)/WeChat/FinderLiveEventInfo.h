@class NSMutableArray;

@interface FinderLiveEventInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int eventId;
@property (nonatomic) unsigned int participantIdentity;
@property (nonatomic) unsigned int eventStatus;
@property (nonatomic) unsigned int streamStatus;
@property (retain, nonatomic) NSMutableArray *relatedEvents;

+ (void)initialize;

- (void)setRelatedEvents:(id)a0;
- (id)relatedEvents;
- (void)setStreamStatus:(unsigned int)a0;
- (unsigned int)streamStatus;
- (void)setEventStatus:(unsigned int)a0;
- (unsigned int)eventStatus;
- (void)setParticipantIdentity:(unsigned int)a0;
- (unsigned int)participantIdentity;
- (void)setEventId:(unsigned int)a0;
- (unsigned int)eventId;

@end
