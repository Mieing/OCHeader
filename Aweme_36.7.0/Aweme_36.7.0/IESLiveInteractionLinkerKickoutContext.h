@class NSString, IESLiveLinkmicLinkAudienceKickoutContext, NSObject;

@interface IESLiveInteractionLinkerKickoutContext : NSObject <IESLiveInteractionLinkerKickoutContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceKickoutContext *linkmicContext;
@property (readonly, nonatomic) long long paidCount;
@property (readonly, nonatomic) long long linkDuration;
@property (readonly, nonatomic) int controlType;
@property (readonly, nonatomic) int kickOutSource;
@property (readonly, nonatomic) int sysKickOutSource;
@property (readonly, nonatomic) BOOL isSysKickOut;
@property (copy, nonatomic) NSString *linkmicId;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceKickoutContext:(id)a0;
- (void).cxx_destruct;

@end
