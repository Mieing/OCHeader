@interface BDUGLuckyDogResourceSchemaPopupLockGuard : NSObject

@property (nonatomic) BOOL locked;

- (void)startTimeoutMS:(long long)a0;
- (id)init;
- (void)dealloc;

@end
