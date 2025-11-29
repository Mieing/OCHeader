@class NSString;

@interface WCFinderFeedInputViewOption : NSObject

@property (nonatomic) BOOL canInputEmoticon;
@property (nonatomic) BOOL canInputImage;
@property (nonatomic) BOOL disabledAvatar;
@property (nonatomic) BOOL disabledQuickEmotionInput;
@property (nonatomic) BOOL canSendEmptyText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) unsigned long long maxInputChar;
@property (copy, nonatomic) NSString *inputPlaceholder;
@property (nonatomic) BOOL showKeyboardIfCancelImagePicker;
@property (nonatomic) int viewSceneForReport;

- (void).cxx_destruct;

@end
