@class NSNumber, NSString;
@protocol IESLiveLinkmicJoinChannelContext;

@interface IESLiveLinkmicLinkAudienceReplyJoinChannelContext : IESLiveLinkmicLinkAudienceReplyContext <IESLiveLinkmicLinkReplyJoinChannelContext>

@property (readonly, nonatomic) BOOL alreadyJoinChannel;
@property (readonly, nonatomic) id<IESLiveLinkmicJoinChannelContext> joinChannelContext;
@property (readonly, nonatomic) int replyType;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly, copy, nonatomic) NSString *linkerSessionId;
@property (readonly, copy, nonatomic) NSString *remoteLinkerSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;

- (id)initWithReplyResponse:(id)a0;
- (void).cxx_destruct;

@end
