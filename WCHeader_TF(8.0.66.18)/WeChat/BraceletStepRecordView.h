@class UIButton, SportRecord, UIImageView, MMWebImageView, UILabel, UIView;

@interface BraceletStepRecordView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIButton *buttonView;
@property (retain, nonatomic) SportRecord *record;

+ (double)calculateHeight;

- (id)initWithRecord:(id)a0;
- (void)sizeToFitWidth:(double)a0;
- (void)layoutSubviews;
- (void)initViews;
- (void).cxx_destruct;

@end
