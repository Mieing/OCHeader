@class UIButton, UIImageView, TTTAttributedLabel, AWEOpenPlatformAuthScopeItem, DUXCheckBox;
@protocol AWEOpenPlatformScopeDelegate;

@interface AWEOpenPlatformAuthScopeCell : UITableViewCell

@property (retain, nonatomic) TTTAttributedLabel *scopeNameLabel;
@property (retain, nonatomic) TTTAttributedLabel *scopeDescLabel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIButton *rightTipsView;
@property (retain, nonatomic) AWEOpenPlatformAuthScopeItem *item;
@property (nonatomic) BOOL isHalf;
@property (weak, nonatomic) id<AWEOpenPlatformScopeDelegate> delegate;

+ (double)marginTopOfScopeNameLabel;
+ (double)heightForScopeItem:(id)a0 topMargin:(double)a1 width:(double)a2;
+ (double)maxWidthOfScopeNameLabelWithCellWidth:(double)a0 item:(id)a1;
+ (id)attributedStringFromScopeItem:(id)a0 style:(unsigned long long)a1;
+ (id)scopeDescLabelFont;
+ (double)marginHorizonal;
+ (id)scopeNameLabelColorWithItem:(id)a0 style:(unsigned long long)a1;
+ (id)scopeNameLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isHalf:(BOOL)a2 cellWidth:(double)a3;
- (void)configureWithModel:(id)a0 style:(unsigned long long)a1 topMargin:(double)a2;
- (void)updateCheckStatusWithModel:(id)a0 style:(unsigned long long)a1;
- (void)tapRightTips:(id)a0;
- (id)noAuthDiaLogTitle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
