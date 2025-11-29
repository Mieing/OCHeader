@class AWEIMShareModel, NSString, UIImageView, UILabel, UIView;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEIMHalfScreenContactTableViewCell : UITableViewCell

@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) BOOL selectable;
@property (nonatomic) unsigned long long userPrivacyGetAliasScene;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;

- (id)aAWEBrandColorAdapter;
- (void)updateActiveStatusWithShareModel:(id)a0;
- (void)configNameLabelWithShareModel:(id)a0;
- (void)updateConsecutiveChatStatus;
- (id)attrForText:(id)a0 highlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attr:(id)a2;
- (void)changeSelectState:(BOOL)a0;
- (void)configWithShareModel:(id)a0 conversationID:(id)a1;
- (void)changeSelectableState:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
