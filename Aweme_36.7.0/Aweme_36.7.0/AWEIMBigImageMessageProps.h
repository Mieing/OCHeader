@class UIColor, NSURL, NSString;

@interface AWEIMBigImageMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIColor *bubbleBGColor;
@property (retain, nonatomic) NSURL *displayImageURL;
@property (retain, nonatomic) NSString *titleStr;

- (void).cxx_destruct;

@end
