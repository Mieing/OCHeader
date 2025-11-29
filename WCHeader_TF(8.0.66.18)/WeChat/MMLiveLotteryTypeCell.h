@class NSString, UIImageView, UIView, MMUILabel;

@interface MMLiveLotteryTypeCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectionIndicatorView;
@property (retain, nonatomic) MMUILabel *optionNameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *sepelateLine;
@property (nonatomic) unsigned int optionValue;
@property (retain, nonatomic) NSString *optionName;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL enable;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithOptionValue:(unsigned int)a0 optionName:(id)a1 desc:(id)a2 isSelected:(BOOL)a3 enable:(BOOL)a4;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
