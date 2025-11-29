@class NSString, UIImage, NSMutableAttributedString;

@interface AWEIMResponseToWhoSeeMyStoryMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *noticeText;
@property (retain, nonatomic) UIImage *videoImage;
@property (nonatomic) BOOL iconHidden;
@property (nonatomic) BOOL nonexistentContainerHidden;
@property (retain, nonatomic) NSMutableAttributedString *storyReplayAttriStr;

- (void).cxx_destruct;

@end
