@class NSDateFormatter, UIImageView, AWEECOMIMChatSearchPriorityMiddleLabelView, UILabel;

@interface AWEECOMIMChatSearchResultListChatMsgCell : UITableViewCell

@property (retain, nonatomic) UIImageView *shopIconView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) AWEECOMIMChatSearchPriorityMiddleLabelView *msgLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;

+ (id)identifier;
+ (double)cellHeight;

- (id)timeStringFromCursor:(double)a0;
- (void)configCellWithModel:(id)a0 matchStr:(id)a1 needShowCountInfo:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
