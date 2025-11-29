@class NSString, IESLiveLinkmicLinkAudiencePermitContext, NSObject;

@interface IESLiveInteractionLinkerPermitContext : NSObject <IESLiveInteractionLinkerPermitContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudiencePermitContext *linkmicContext;
@property (readonly, nonatomic) int linkType;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudiencePermitContext:(id)a0;
- (void).cxx_destruct;

@end
