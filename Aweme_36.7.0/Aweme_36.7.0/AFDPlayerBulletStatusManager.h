@class NSNumber;

@interface AFDPlayerBulletStatusManager : NSObject

@property (retain, nonatomic) NSNumber *closeBulletStatus;

+ (id)sharedInstance;

- (BOOL)isCloseBulletStatus;
- (void)updateUserBulletSwitchStatus:(BOOL)a0;
- (BOOL)p_readFromStorage;
- (void)p_saveToStorage:(BOOL)a0;
- (void).cxx_destruct;

@end
