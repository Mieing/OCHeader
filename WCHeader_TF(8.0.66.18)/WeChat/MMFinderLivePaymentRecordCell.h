@class MMFinderLivePaymentInfo, MMCPLabel, UIImageView;
@protocol MMFinderLivePaymentRecordCellDelegate;

@interface MMFinderLivePaymentRecordCell : MMTableViewCell

@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMFinderLivePaymentInfo *paymentInfo;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMCPLabel *paymentValueLabel;
@property (nonatomic) BOOL forceDarkMode;
@property (weak, nonatomic) id<MMFinderLivePaymentRecordCellDelegate> cellDelegate;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithPaymentInfo:(id)a0 forceDarkMode:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
