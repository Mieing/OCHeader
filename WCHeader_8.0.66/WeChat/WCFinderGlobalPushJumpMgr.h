@class NSString;

@interface WCFinderGlobalPushJumpMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleInactiveAPNSPushWithUsrInfo:(id)a0;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)a0;
- (void)handleLocalPushWithUsrInfo:(id)a0;
- (void)handlePushWithGlobalPushInfo:(id)a0;
- (void)showLiveRoomWithGlobalPushInfo:(id)a0;
- (void)jumpToFinderTimelineWithType:(unsigned long long)a0 globalPushInfo:(id)a1;
- (BOOL)findSettingPageFinderIsClose;

@end
