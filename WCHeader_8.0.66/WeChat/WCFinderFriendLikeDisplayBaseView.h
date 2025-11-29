@class UITapGestureRecognizer, WCFinderFeedFriendLikeViewModel;

@interface WCFinderFriendLikeDisplayBaseView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *actionGesture;
@property (retain, nonatomic) WCFinderFeedFriendLikeViewModel *viewmodel;
@property (copy, nonatomic) id /* block */ clickViewAction;
@property (nonatomic) BOOL enableClickAction;

- (id)createLikeInfoTextView;
- (void)setUpUI;
- (id)initWithViewModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)generatorAvatorView:(id)a0 headUrl:(id)a1 headerViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateWithViewModel:(id)a0;
- (void)clickSelfViewAction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxCombinedSubviewFrame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
