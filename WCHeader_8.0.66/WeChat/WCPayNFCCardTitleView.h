@class NSString, UILabel, UIView;

@interface WCPayNFCCardTitleView : UIView {
    NSString *_title;
    UIView *_leftView;
    UILabel *_labelView;
}

- (id)initWithTitle:(id)a0;
- (void)updateView;
- (void).cxx_destruct;

@end
