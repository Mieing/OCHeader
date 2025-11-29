@class UIImage, NSAttributedString, AWEIMCustomerServiceNoticeTipMessage;

@interface AWEIMCustomerServiceNoticeTipContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) AWEIMCustomerServiceNoticeTipMessage *message;

- (void).cxx_destruct;

@end
