@class UIColor, NSAttributedString, NSURL;

@interface AWEIMVideoCommentMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (retain, nonatomic) UIColor *bubbleStrokeColor;
@property (copy, nonatomic) NSAttributedString *commentStr;
@property (retain, nonatomic) NSURL *coverURL;
@property (nonatomic) BOOL unavailableFlag;

- (void).cxx_destruct;

@end
