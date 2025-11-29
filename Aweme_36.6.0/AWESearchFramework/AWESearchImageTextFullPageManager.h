@interface AWESearchImageTextFullPageManager : NSObject

@property BOOL hasSaveState;
@property unsigned long long muteType;
@property unsigned long long playMode;

+ (id)sharedManager;

- (void)saveImageTextIsPicScrollPause:(BOOL)a0 muteType:(unsigned long long)a1;
- (id)init;

@end
