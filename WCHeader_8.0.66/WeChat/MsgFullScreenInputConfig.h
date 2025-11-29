@class MMTextView;

@interface MsgFullScreenInputConfig : NSObject

@property (nonatomic) long long textMaxLength;
@property (retain, nonatomic) MMTextView *textView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL bEnableTopicSearchInteraction;
@property (nonatomic) BOOL bEnableDictation;
@property (nonatomic) int dictationCgiScene;
@property (nonatomic) int dictationUIParentScene;

- (void).cxx_destruct;

@end
