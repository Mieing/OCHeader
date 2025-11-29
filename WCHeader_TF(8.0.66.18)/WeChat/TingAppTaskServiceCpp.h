@class NSString;

@interface TingAppTaskServiceCpp : UnitRCObjcBaseProxyClass <TingAppTaskService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateSessionWithEnterScene:(long long)a0;
- (void)clearSession;
- (long long)enterScene;
- (id)sessionId;
- (int)displayMode;
- (void)setDisplayMode:(int)a0;

@end
