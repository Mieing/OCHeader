@class UILabel, NSString;

@interface AWEFeedFriendsOnFeedAllReadLinkView : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ linkViewClickAction;

- (id)initWithText:(id)a0 clickAction:(id /* block */)a1;
- (void)didClickAction;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
