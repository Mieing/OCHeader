@class NSMutableArray, AWEFansPushUserModel, UIImageView, UILabel, UIView, AWEInsetsLabel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEIMFansPushTableViewCell : UITableViewCell

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *avatarView;
@property (nonatomic) BOOL liveTagShow;
@property (nonatomic) BOOL needShowUrge;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveTagView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *urgeLiveLabel;
@property (retain, nonatomic) AWEInsetsLabel *verificationLabel;
@property (retain, nonatomic) NSMutableArray *detailAreaViews;
@property (retain, nonatomic) AWEFansPushUserModel *model;
@property (copy, nonatomic) id /* block */ handleTapOnAvatar;
@property (copy, nonatomic) id /* block */ handleTapOnLiveTag;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configWithModel:(id)a0 type:(unsigned long long)a1;
- (void)configWithModel:(id)a0 liveTagShow:(BOOL)a1;
- (id)verificationLabelText;
- (void)tapOnAvatar:(id)a0;
- (void)p_appendUrgeLiveTextIfNeed;
- (void)p_appendSentGiftDescriptionAreaWithUrl:(id)a0 count:(long long)a1;
- (void)p_appendTextDecriptionWithText:(id)a0;
- (id)p_countToString:(long long)a0;
- (void)tapOnLiveTag:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)_refreshUI;

@end
