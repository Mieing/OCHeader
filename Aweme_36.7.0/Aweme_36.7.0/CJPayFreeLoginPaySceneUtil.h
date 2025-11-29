@class NSString;

@interface CJPayFreeLoginPaySceneUtil : NSObject <CJPayFreeLoginPaySceneService>

@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL isKickOutLogin;
@property (nonatomic) BOOL isFreeLoginPayScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (BOOL)isFreeLoginPaySceneWithSchemaParams:(id)a0;
+ (long long)p_freeLoginPaySceneEventWithEvent:(id)a0;
+ (BOOL)p_isTTAccountAvail;
+ (BOOL)p_isFreeLoginPaySceneSetting;
+ (BOOL)p_isOutPaySceneWithSchemaParams:(id)a0;
+ (BOOL)p_isOutPaySceneSignOrXYSignWithServiceType:(id)a0;
+ (id)getOuterZFSourceString;
+ (id)getXYSignString;
+ (id)getXYOrderConfirmString;
+ (id)defaultService;

- (id)i_freeLoginPaySceneEventWithParams:(id)a0 event:(id)a1;
- (id)p_getFreeLoginPayScene;
- (void)p_setAccountWithParams:(id)a0;
- (id)p_getAccount;
- (void)p_cleanData;
- (void).cxx_destruct;
- (void)cleanData;

@end
