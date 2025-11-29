@class NSString;

@interface AWECommentEvaluationContentElementConfig : NSObject

@property (copy, nonatomic) NSString *textSendButtonText;
@property (copy, nonatomic) NSString *textEmptyToast;
@property (copy, nonatomic) NSString *textPlaceholder;
@property (nonatomic) long long textMaxLength;
@property (nonatomic) BOOL textEnableGif;
@property (nonatomic) unsigned long long textOverMaxStyle;
@property (nonatomic) unsigned long long sendButtonStyle;
@property (nonatomic) unsigned long long returnButtonStyle;

- (void).cxx_destruct;

@end
