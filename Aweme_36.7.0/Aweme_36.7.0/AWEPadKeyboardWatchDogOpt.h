@interface AWEPadKeyboardWatchDogOpt : NSObject

@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) long long delayCreateKeyboardWindowTime;
@property (nonatomic) long long maxCreateTimes;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)shared;

- (void)markCreateKeyboardWindow;
- (void)createKeyboardWindowIfNeeded;
- (id)init;
- (void)keyboardDidShow;

@end
