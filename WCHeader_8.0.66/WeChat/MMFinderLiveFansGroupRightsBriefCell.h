@class MMUILabel, MMUIButton;

@interface MMFinderLiveFansGroupRightsBriefCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUIButton *unsubscribeButton;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (copy, nonatomic) id /* block */ onUnsubscribe;

+ (id)detailText;
+ (id)detailFont;
+ (double)layoutPadding;
+ (double)cellHeightWithMaxWidth:(double)a0 showUnsubscribeSuperfanButton:(BOOL)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)setShowUnsubscribeSuperfanButton:(BOOL)a0;
- (void)unsubscribeSuperfanButtonClicked;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
