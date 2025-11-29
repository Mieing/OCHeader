@class NSString, NSObject;
@protocol IESLiveInteractionLinkerKickoutContextProtocol, IESLiveLinkmicLinkParams, IESLiveInteractionLinkerLeaveContextProtocol, IESLiveInteractionLinkerCloseContextProtocol;

@interface IESLiveInteractionLinkerDisconnectContext : NSObject <IESLiveInteractionLinkerDisconnectContextProtocol>

@property (retain, nonatomic) id<IESLiveLinkmicLinkParams> linkParams;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) BOOL hasLeaveContext;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerLeaveContextProtocol> leaveContext;
@property (readonly, nonatomic) BOOL hasCloseContext;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerCloseContextProtocol> closeContext;
@property (readonly, nonatomic) BOOL hasKickoutContext;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerKickoutContextProtocol> kickoutContext;
@property (copy, nonatomic) NSString *linkmicId;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInteractionLinkerContext:(id)a0 reason:(long long)a1;
- (void).cxx_destruct;

@end
