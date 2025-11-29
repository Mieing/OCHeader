@class UITapGestureRecognizer, NSString, AWESearchAIGCChunkInboxExtra, UILabel, UIView, UIButton;
@protocol AWESearchAIGCInputCopilotQuestionViewDelegate;

@interface AWESearchAIGCInputCopilotQuestionView : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<AWESearchAIGCInputCopilotQuestionViewDelegate> delegate;
@property (retain, nonatomic) UIView *blackMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *optionContainerView;
@property (retain, nonatomic) UITapGestureRecognizer *maskTapGes;
@property (nonatomic) BOOL isFirstShow;
@property (readonly, nonatomic) AWESearchAIGCChunkInboxExtra *inboxExtra;
@property (nonatomic) long long optionSelectState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindActions;
- (void)refreshSubviewsLayout;
- (void)refreshWithInboxExtra:(id)a0;
- (void)startRemoveAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)reset;
- (void)layoutSubviews;
- (id)searchSource;

@end
