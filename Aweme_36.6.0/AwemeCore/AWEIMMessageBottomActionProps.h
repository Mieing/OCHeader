@class NSString, UIColor;

@interface AWEIMMessageBottomActionProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) id /* block */ buttonTapAction;

- (void).cxx_destruct;

@end
