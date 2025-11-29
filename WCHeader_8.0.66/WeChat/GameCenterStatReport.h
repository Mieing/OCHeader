@class NSString;

@interface GameCenterStatReport : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)report12909WithWithScene:(long long)a0 uiArea:(unsigned int)a1 position:(unsigned int)a2 action:(long long)a3 extInfo:(id)a4;
- (void)stat12909:(id)a0;
- (void)stat31408:(id)a0;
- (void)stat13384:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)svrReport:(unsigned int)a0 withLogExt:(id)a1;

@end
