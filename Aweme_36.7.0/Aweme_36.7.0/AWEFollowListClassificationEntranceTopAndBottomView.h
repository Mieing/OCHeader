@class NSString, UIImageView, AWEFollowListPageContext, UILabel, UIView;

@interface AWEFollowListClassificationEntranceTopAndBottomView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long type;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) BOOL unreadNeedTotal;
@property (nonatomic) int entranceTag;
@property (nonatomic) BOOL enableBadgeControl;
@property (copy, nonatomic) NSString *frequencyControlKey;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)entranceNameByType:(long long)a0;

- (id)aAWEPadModuleAdapter;
- (BOOL)configModel:(id)a0;
- (void)handletap:(id)a0;
- (void)categoryButtonClick:(long long)a0 unreadCount:(long long)a1 order:(long long)a2;
- (void)configBadgeFrequencyControl:(id)a0;
- (void)showRedDot;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupView;

@end
