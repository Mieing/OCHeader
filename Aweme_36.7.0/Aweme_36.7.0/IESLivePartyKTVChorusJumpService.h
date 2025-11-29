@class IESLivePartyKTVChorusApi;

@interface IESLivePartyKTVChorusJumpService : NSObject

@property (retain, nonatomic) IESLivePartyKTVChorusApi *api;

- (void)didSetAttachingDIContext;
- (void)jumpToChorusWithParams:(id)a0;
- (void)checkCurrentLinkmicStatusBeforeJumpToChorus:(BOOL)a0 roomID:(id)a1 slideRooms:(id)a2 jumpParams:(id)a3;
- (void)realJumpToChorus:(BOOL)a0 roomID:(id)a1 slideRooms:(id)a2 jumpParams:(id)a3;
- (void).cxx_destruct;
- (BOOL)isGuest;
- (BOOL)isAnchor;

@end
