@class MagicSclFrameSetView, NSString, UIView, MMLiveGamePlayTogetherDynamicCardItem;

@interface MMLiveGamePlayTogetherDynamicCardCell : MMLiveGamePlayTogetherTableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (retain, nonatomic) MMLiveGamePlayTogetherDynamicCardItem *item;
@property (retain, nonatomic) NSString *rootId;

+ (id)identifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setItem:(id)a0 rootId:(id)a1;
- (void)updatePlayTogetherData:(id)a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
