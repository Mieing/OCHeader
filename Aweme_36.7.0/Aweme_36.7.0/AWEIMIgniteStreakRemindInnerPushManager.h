@class NSString;

@interface AWEIMIgniteStreakRemindInnerPushManager : NSObject <AWEPushSBCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (void)p_tryShowPushWithPayLoad:(id)a0;
- (id)p_createPushModelWithUser:(id)a0 payload:(id)a1;
- (void)p_showPushWithPushModel:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
