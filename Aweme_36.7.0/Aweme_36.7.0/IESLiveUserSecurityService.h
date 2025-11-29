@class NSString;

@interface IESLiveUserSecurityService : IESLiveGeneralBaseService <IESLiveUserSecurityService, IESLiveInteractAction>

@property (nonatomic) BOOL isLinkedUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)didLeaveRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (BOOL)useDesensitizedUsername:(id)a0;

@end
