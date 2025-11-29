@interface LSIMInputKeyboardHelper : NSObject

@property (nonatomic) double customKeyboardHeightInternal;
@property (nonatomic) BOOL addedMonitor;
@property (readonly, nonatomic) double panelContainerHeight;

+ (id)defaultManager;

- (double)lastHeight;
- (id)initNotification;
- (double)cacheCustomKeyboardHeight;
- (void)saveCustomKeyboardHeight;
- (void)saveHeight:(double)a0;
- (double)keyboardHeight;
- (void)keyboardWillShow:(id)a0;
- (void)startMonitor;

@end
