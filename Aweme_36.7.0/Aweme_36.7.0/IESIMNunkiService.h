@class NSString;

@interface IESIMNunkiService : HTSService <IESIMNunkiService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryDangerLevelTopNotification;
- (BOOL)isMemoryDangerTopLevel;
- (BOOL)shouldAWEIMReadReceiptManagerMemoryWarning;
- (BOOL)shouldAWEIMContactUidMMKVDataBaseMemoryWarning;
- (BOOL)shouldBulletContainerReusePoolMemoryWarning;
- (BOOL)isMemoryDangerSecondLevel;
- (id)init;

@end
