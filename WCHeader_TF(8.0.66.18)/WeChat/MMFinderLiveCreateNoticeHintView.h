@class MMFinderLiveCreateNoticeReporter, UILabel, MMUIButton, UIView;
@protocol MMFinderLiveCreateNoticeHintViewDelegate;

@interface MMFinderLiveCreateNoticeHintView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *createButton;
@property (retain, nonatomic) MMFinderLiveCreateNoticeReporter *createNoticeReporter;
@property (weak, nonatomic) id<MMFinderLiveCreateNoticeHintViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithGuideInfo:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onCreateButtonTapped;
- (void)onCloseButtonTapped;
- (void)dismiss;
- (void).cxx_destruct;

@end
