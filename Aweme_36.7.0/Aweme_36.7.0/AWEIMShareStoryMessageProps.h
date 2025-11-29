@class NSString, UIImage;

@interface AWEIMShareStoryMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) BOOL sendFromMe;
@property (retain, nonatomic) NSString *noticeLableText;
@property (retain, nonatomic) UIImage *videoImage;
@property (nonatomic) BOOL hiddenPlayIcon;
@property (nonatomic) BOOL hiddennonexistentContainer;
@property (retain, nonatomic) NSString *storyReplyStr;

- (void).cxx_destruct;

@end
