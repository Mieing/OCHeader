@class AWEIMMessageBottomQuickReplyListProps, NSMutableArray;

@interface AWEIMMessageBottomQuickReplyListView : UIStackView

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) AWEIMMessageBottomQuickReplyListProps *props;

- (void)updateWithProps:(id)a0;
- (void)p_viewFit;
- (id)p_generateLineUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
