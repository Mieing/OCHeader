@class NSString, HTSLiveLinkMicMethod, IESLiveLinkMicAudienceFinishResponse, NSNumber, NSObject;

@interface IESLiveLinkmicLinkAudienceCloseContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkCloseContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceFinishResponse *finishResponse;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (readonly, copy, nonatomic) NSString *banAnchorUserId;
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

- (id)initWithLinkMicMethodMessage:(id)a0;
- (id)initWithFinishResponse:(id)a0;
- (void).cxx_destruct;
- (id)rawData;
- (id)extraData;

@end
