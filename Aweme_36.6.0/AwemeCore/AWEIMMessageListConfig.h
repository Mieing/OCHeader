@class NSString, UIViewController;

@interface AWEIMMessageListConfig : NSObject

@property (nonatomic) BOOL isFloatMode;
@property (weak, nonatomic) UIViewController *floatContainerVC;
@property (nonatomic) BOOL fromFloatWindow;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL floatModeNewStyle;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL shouldRetainWhenTransferToOtherChat;

- (void).cxx_destruct;

@end
