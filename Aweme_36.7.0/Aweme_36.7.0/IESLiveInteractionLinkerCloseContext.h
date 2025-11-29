@class NSString, IESLiveBanUser, NSObject, IESLiveLinkmicLinkAudienceCloseContext;

@interface IESLiveInteractionLinkerCloseContext : NSObject <IESLiveInteractionLinkerCloseContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceCloseContext *linkmicContext;
@property (readonly, nonatomic) IESLiveBanUser *banAnchorInfo;
@property (readonly, nonatomic) long long reason;
@property (nonatomic) unsigned long long closeRoomType;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceCloseContext:(id)a0 closeReason:(long long)a1;
- (id)initWithCloseReason:(long long)a0;
- (void).cxx_destruct;

@end
