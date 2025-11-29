@class UILabel, NSString, UIView;

@interface AWEECBubbleView : UIView

@property (retain, nonatomic) UIView *bgBubbleView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSString *content;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
