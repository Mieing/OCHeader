@class NSString, UILabel, NSMutableArray, UIButton;
@protocol WCFinderFeedbackReasonViewDelegate;

@interface WCFinderFeedbackReasonView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSMutableArray *optionButtonArray;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *dislikeTitle;
@property (copy, nonatomic) NSString *dislikeDesc;
@property (copy, nonatomic) NSString *feedbackButtonTitle;
@property (nonatomic) BOOL showSelectedButtonStyle;
@property (weak, nonatomic) id<WCFinderFeedbackReasonViewDelegate> delegate;

- (id)initWithMaxWidth:(double)a0;
- (void)updateWithOptionList:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)initSubviews;
- (id)genOptionButtonWithTitle:(id)a0;
- (void)addFlexLayout;
- (void)addButtonsInLine:(void *)a0 buttons:(id)a1;
- (void)onClickOptionButton:(id)a0;
- (void)updateFeedbackButonStyle:(BOOL)a0;
- (void)onClickFeedbackButton:(id)a0;
- (void).cxx_destruct;

@end
