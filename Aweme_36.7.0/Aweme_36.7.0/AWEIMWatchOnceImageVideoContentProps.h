@class UIImage, NSAttributedString, UIColor;

@interface AWEIMWatchOnceImageVideoContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIImage *watchEndIconImage;
@property (retain, nonatomic) UIImage *beforeWatchIconImage;
@property (retain, nonatomic) NSAttributedString *watchEndLabelTitle;
@property (retain, nonatomic) NSAttributedString *beforeWatchLabelTitle;
@property (retain, nonatomic) UIColor *watchEndLabelTextColor;
@property (retain, nonatomic) UIColor *beforeWatchLabelTextColor;
@property (nonatomic) BOOL isWatchEnd;

- (void).cxx_destruct;

@end
