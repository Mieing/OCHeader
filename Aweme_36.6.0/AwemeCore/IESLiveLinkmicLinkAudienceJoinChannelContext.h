@class NSObject, NSString, NSArray, IESLiveLinkMicAudienceJoinChannelResponse_ResponseData, NSNumber, IESLiveClientUIInfo;

@interface IESLiveLinkmicLinkAudienceJoinChannelContext : IESLiveLinkmicLinkContext <IESLiveLinkmicJoinChannelContext> {
    NSObject *_rawData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_ResponseData *joinChannelResponse;
@property (copy, nonatomic) NSString *joinedUserID;
@property (nonatomic) BOOL shouldMuteAudioAfterJoined;
@property (nonatomic) int applyType;
@property (copy, nonatomic) NSString *promptWithEarphone;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSArray *linkedUsersArray;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *liveCoreSettings;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
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

- (id)initWithJoinChannelResponse:(id)a0;
- (id)initWithEarlyJoinChannelData:(id)a0;
- (id)initWithJoinChannelData:(id)a0;
- (id)joinChannelData2JoinChannelResponseData:(id)a0;
- (id)joinChannelDelegateSetting2JoinChannelResponseDelegateSetting:(id)a0;
- (id)matchEffect2HTSLiveMatchEffect:(id)a0;
- (id)cityEffect2HTSLiveCityEffect:(id)a0;
- (void).cxx_destruct;
- (id)rawData;

@end
