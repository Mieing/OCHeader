@class NSURL, NSString, UIImage;

@interface AWEIMLightInteractionReplyButtonProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *iconTitle;
@property (retain, nonatomic) UIImage *iconPlaceholder;

- (void).cxx_destruct;

@end
