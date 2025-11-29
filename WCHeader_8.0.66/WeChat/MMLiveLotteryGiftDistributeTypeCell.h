@class NSString, MMUILabel, UIView;

@interface MMLiveLotteryGiftDistributeTypeCell : MMTableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMUILabel *optionNameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (nonatomic) unsigned int optionValue;
@property (retain, nonatomic) NSString *optionName;
@property (retain, nonatomic) NSString *desc;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithOptionValue:(unsigned int)a0 optionName:(id)a1 desc:(id)a2 isSelected:(BOOL)a3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
