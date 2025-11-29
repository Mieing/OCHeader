@class UIImageView, MMScrollableActionSheetVerticalRowInfo, MMWebImageView, UILabel, UIButton;
@protocol MMScrollableActionSheetVerticalRowViewDelegate;

@interface MMScrollableActionSheetVerticalRowView : MMUIView

@property (weak, nonatomic) id<MMScrollableActionSheetVerticalRowViewDelegate> delegate;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMScrollableActionSheetVerticalRowInfo *rowInfo;

- (id)initWithDelegate:(id)a0;
- (void)setupAllSubviews;
- (void)setupGestureRecognizer;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (void).cxx_destruct;

@end
