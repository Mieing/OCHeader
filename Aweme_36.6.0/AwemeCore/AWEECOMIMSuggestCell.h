@class YYLabel, AWEECOMIMInputSuggestModel, UIView;

@interface AWEECOMIMSuggestCell : UITableViewCell

@property (retain, nonatomic) YYLabel *quickReplyLabel;
@property (retain, nonatomic) UIView *lineView;
@property (readonly, nonatomic) AWEECOMIMInputSuggestModel *itemModel;

+ (double)cellHeightWithItemModel:(id)a0;
+ (id)identifier;

- (void)reloadWithItemModel:(id)a0 showBottomLine:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
