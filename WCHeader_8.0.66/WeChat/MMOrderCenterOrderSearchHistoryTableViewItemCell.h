@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate;

@interface MMOrderCenterOrderSearchHistoryTableViewItemCell : UITableViewCell

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) UIImageView *historyIconView;
@property (retain, nonatomic) UILabel *keywordView;
@property (retain, nonatomic) UIButton *removeView;
@property (retain, nonatomic) UIView *separatorBarView;
@property (weak, nonatomic) id<MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithKeyword:(id)a0;
- (void)layoutSubviews;
- (void)onRemoveTapped;
- (void).cxx_destruct;

@end
