@class UIColor, NSString, NSURL;

@interface AWEIMLocalGuidanceEntranceCardMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIColor *bGColor;
@property (nonatomic) BOOL needHidden;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSURL *avatarURL;

- (void).cxx_destruct;

@end
