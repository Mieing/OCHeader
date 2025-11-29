@class NSString, IESLiveLinkmicLinkAudienceReplyContext, NSObject;

@interface IESLiveInteractionLinkerReplyContext : NSObject <IESLiveInteractionLinkerReplyContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceReplyContext *linkmicContext;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceReplyContext:(id)a0;
- (void).cxx_destruct;

@end
