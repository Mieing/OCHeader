@class MMUIButton, MJSegmentInspectorViewModel, UIView, MJPublisherButton, MMUILabel;

@interface MJSegmentInspectorView : MMUIView

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MJPublisherButton *applyAllButton;
@property (retain, nonatomic) MJPublisherButton *resetButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) MJSegmentInspectorViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)cancelButtonDidTouchUpInside:(id)a0;
- (void)doneButtonDidTouchUpInside:(id)a0;
- (void)applyAllButtonDidTouchUpInside:(id)a0;
- (void)resetButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
