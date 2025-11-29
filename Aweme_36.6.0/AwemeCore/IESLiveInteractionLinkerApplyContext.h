@class HTSLiveText, NSString, IESLiveLinkmicLinkAudienceApplyContext, IESLiveMicPosTagInfo, NSObject;

@interface IESLiveInteractionLinkerApplyContext : NSObject <IESLiveInteractionLinkerApplyContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceApplyContext *linkmicContext;
@property (readonly, nonatomic) unsigned long long vendor;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *prompts;
@property (readonly, nonatomic) BOOL autoJoin;
@property (readonly, nonatomic) BOOL autoJoinFull;
@property (readonly, nonatomic) long long waitingListOffset;
@property (readonly, nonatomic) int silenceStatus;
@property (readonly, nonatomic) HTSLiveText *fastMatchDisplayText;
@property (readonly, nonatomic) int linkType;
@property (readonly, copy, nonatomic) NSString *subRtcExtInfo;
@property (readonly, nonatomic) IESLiveMicPosTagInfo *micPosTagInfo;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceApplyContext:(id)a0;
- (void).cxx_destruct;

@end
