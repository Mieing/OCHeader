@class AWEAwemeModel, AWEScrollStringLabel, DUXButton, DUXBaseImageView, UIView, DUXBaseLabel;

@interface AWERecordInspirationFeedBottomView : UIView

@property (retain, nonatomic) AWEScrollStringLabel *effectNameLabel;
@property (retain, nonatomic) DUXBaseLabel *effectUserCountLabel;
@property (retain, nonatomic) DUXBaseImageView *effectAuthorCoverImageView;
@property (retain, nonatomic) DUXBaseLabel *effectAuthorNameLabel;
@property (retain, nonatomic) DUXButton *effectAuthorButton;
@property (retain, nonatomic) DUXBaseLabel *profileAuthorNameLabel;
@property (retain, nonatomic) UIView *profileAuthorBackgroundView;
@property (nonatomic) double elementCommonBottomOffSet;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXBaseLabel *multiLoraPersonRangeLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (BOOL)isAIFollowShootEffect:(id)a0;
- (struct CGSize { double x0; double x1; })calculateCustomLabelHeightWithLabel:(id)a0 font:(id)a1;
- (id)initWithBottomOffSet:(double)a0;
- (BOOL)isStandardAuthorAccount:(id)a0;
- (void)effectAuthorButtonClicked:(id)a0;
- (id)formatTimeFromSeconds:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
