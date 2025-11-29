@interface BU_VideoStatusConfig : NSObject

@property (nonatomic) BOOL isLockScreen;
@property (nonatomic) BOOL isAllowLandscape;
@property (nonatomic) BOOL isLandscape;

+ (id)sharedBrightnessView;

- (id)init;
- (void)dealloc;

@end
