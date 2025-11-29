@class AWEButton, DUXLoadingCircleView, AWEAwemeModel;

@interface AWEPlayInteractionCoCreatorInviteView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEButton *acceptButton;
@property (retain, nonatomic) AWEButton *refuseButton;
@property (copy, nonatomic) id /* block */ acceptButtonHandler;
@property (copy, nonatomic) id /* block */ refuseButtonHandler;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;

- (void)startLoading:(id)a0;
- (void)acceptButtonAction;
- (void)refuseButtonAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading:(id)a0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
