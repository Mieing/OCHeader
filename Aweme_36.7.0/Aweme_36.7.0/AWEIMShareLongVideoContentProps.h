@class AWEIMMessage;

@interface AWEIMShareLongVideoContentProps : AWEIMUIViewPresenterProps

@property (nonatomic) double bubbleCornerRadius;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMMessage *originMessage;
@property (nonatomic) BOOL needFold;

- (void).cxx_destruct;

@end
