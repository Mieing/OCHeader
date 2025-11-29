@class NSObject, NSString, IESLiveLinkMicAudienceKickOutResponse_ResponseData, HTSLiveLinkMicMethod, HTSLiveLinkMessage, NSNumber;

@interface IESLiveLinkmicLinkAudienceKickoutContext : IESLiveLinkmicLinkContext <IESLiveLinkmicKickoutContext> {
    NSObject *_rawData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceKickOutResponse_ResponseData *kickOutResponse;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (retain, nonatomic) HTSLiveLinkMessage *linkMessage;
@property (retain, nonatomic) NSString *kickoutFromUserID;
@property (nonatomic) long long sysKickOutSource;
@property (nonatomic) BOOL isSysKickOut;
@property (readonly, nonatomic) BOOL switchToSilence;
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
- (id)initWithKickoutResponse:(id)a0;
- (id)initWithLinkMessage:(id)a0;
- (void).cxx_destruct;
- (id)rawData;

@end
