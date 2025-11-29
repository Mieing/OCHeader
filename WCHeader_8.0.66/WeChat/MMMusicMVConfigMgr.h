@class NSString;

@interface MMMusicMVConfigMgr : MMUserService <MMServiceProtocol> {
    BOOL _degradeToH5;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (unsigned long long)musicUIStyleWithMusicBizScene:(unsigned long long)a0 bNewMvMsg:(BOOL)a1 appId:(id)a2;
- (unsigned long long)__musicUIStyleWithMusicBizScene:(unsigned long long)a0 bNewMvMsg:(BOOL)a1 appId:(id)a2;
- (BOOL)isChatRoomSwitchOpen;
- (BOOL)isForbidMusicCache;

@end
