@class UIButton;

@interface IESLiveCommentWidgetOperationView : UIView

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (copy, nonatomic) id /* block */ didClickDelete;
@property (copy, nonatomic) id /* block */ didClickSend;

- (void)makeSendBtnDisable:(BOOL)a0;
- (void)makeDeleteBtnVisible:(BOOL)a0;
- (void)makeDeleteBtnDisable:(BOOL)a0;
- (void)clickDelete:(id)a0;
- (void)clickSend:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
