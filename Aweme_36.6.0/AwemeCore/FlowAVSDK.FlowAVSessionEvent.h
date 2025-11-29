@class _TtC9FlowAVSDK28FlowAVSessionEventReplyBegin, _TtC9FlowAVSDK32FlowAVSessionEventSessionStarted, _TtC9FlowAVSDK23FlowAVSessionVideoEvent, _TtC9FlowAVSDK23FlowAVSessionAudioEvent, _TtC9FlowAVSDK26FlowAVSessionEventQueryEnd, NSString, _TtC9FlowAVSDK26FlowAVSessionEventReplyEnd, _TtC9FlowAVSDK20FlowAVSessionCommand, _TtC9FlowAVSDK29FlowAVSessionEventQueryUpdate, _TtC9FlowAVSDK29FlowAVSessionEventReplyUpdate, _TtC9FlowAVSDK28FlowAVSessionEventQueryBegin, NSArray, _TtC9FlowAVSDK33FlowAVSessionEventSessionFinished;

@interface FlowAVSDK.FlowAVSessionEvent : NSObject {
    void /* function */ commandReply;
}

@property (nonatomic) long long type;
@property (nonatomic, retain) _TtC9FlowAVSDK23FlowAVSessionAudioEvent *audioEvent;
@property (nonatomic, retain) _TtC9FlowAVSDK23FlowAVSessionVideoEvent *videoEvent;
@property (nonatomic, retain) _TtC9FlowAVSDK20FlowAVSessionCommand *commandEvent;
@property (nonatomic, retain) _TtC9FlowAVSDK32FlowAVSessionEventSessionStarted *sessionStarted;
@property (nonatomic, retain) _TtC9FlowAVSDK33FlowAVSessionEventSessionFinished *sessionFinished;
@property (nonatomic, retain) _TtC9FlowAVSDK28FlowAVSessionEventQueryBegin *queryBegin;
@property (nonatomic, retain) _TtC9FlowAVSDK29FlowAVSessionEventQueryUpdate *queryUpdate;
@property (nonatomic, retain) _TtC9FlowAVSDK26FlowAVSessionEventQueryEnd *queryEnd;
@property (nonatomic, retain) _TtC9FlowAVSDK28FlowAVSessionEventReplyBegin *replyBegin;
@property (nonatomic, retain) _TtC9FlowAVSDK29FlowAVSessionEventReplyUpdate *replyUpdate;
@property (nonatomic, retain) _TtC9FlowAVSDK26FlowAVSessionEventReplyEnd *replyEnd;
@property (nonatomic, copy) NSArray *commandReply;
@property (nonatomic, readonly) NSString *debugDesc;

- (void).cxx_destruct;
- (id)init;

@end
