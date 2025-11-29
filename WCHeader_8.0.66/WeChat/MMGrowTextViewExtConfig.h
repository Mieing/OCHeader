@class UIColor;

@interface MMGrowTextViewExtConfig : NSObject

@property (nonatomic) BOOL enableColorTopicTag;
@property (nonatomic) BOOL enableInputSharpHelperMenu;
@property (nonatomic) BOOL enableTopicSearchMenu;
@property (nonatomic) BOOL enableTranslateTool;
@property (nonatomic) BOOL enableFullScreenInput;
@property (retain, nonatomic) UIColor *topicColor;
@property (nonatomic) BOOL disableChangeSizeAnimation;
@property (nonatomic) BOOL disableBackgroundImageInsets;
@property (nonatomic) BOOL disableLineFragmentPadding;
@property (nonatomic) BOOL enablePlaceholderPinText;
@property (nonatomic) BOOL useDefaultReturnKey;
@property (nonatomic) BOOL donotNeedTextViewContentTopBottomInset;
@property (nonatomic) BOOL notNeedScrollerExtraY;
@property (nonatomic) BOOL enableDictation;
@property (nonatomic) int dictationCgiScene;
@property (nonatomic) int dictationUIScene;

- (void).cxx_destruct;

@end
