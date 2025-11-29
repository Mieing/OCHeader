@class NSArray, NSString;

@interface AWEUGAlertManager : HTSService <AWEUGAlertManagementService>

@property (retain, nonatomic) NSArray *alertTypeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow:(id)a0;
- (double)getCurrTime;
- (void)recordAlertShowedAt:(id)a0;
- (void)recordUserGrantedPermission:(id)a0;
- (void)registerAlertType:(id)a0;
- (id)AWEUGAlertType;
- (void)recordAlertFirstTriggeredAt:(id)a0;
- (BOOL)p_canShowAtFrequency:(id)a0 WithAlertType:(id)a1;
- (BOOL)p_canShowAlertHide:(id)a0 WithAlertType:(id)a1;
- (BOOL)p_canShowTimesDenied:(long long)a0 WithAlertType:(id)a1;
- (void)p_sortRecord:(id)a0;
- (BOOL)p_checkShowFrequency:(double)a0 current:(double)a1 inRecord:(id)a2 maxCount:(long long)a3;
- (BOOL)p_checkElapsedTimeWithinRange:(double)a0 currTime:(double)a1 range:(long long)a2;
- (void).cxx_destruct;

@end
