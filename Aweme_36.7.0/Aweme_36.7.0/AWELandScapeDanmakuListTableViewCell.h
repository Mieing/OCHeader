@class UIButton, AWEDanmakuModel, UIImageView, UILabel, UIView, YYLabel;
@protocol AWELandScapeDanmakuListTableViewCellDelegate;

@interface AWELandScapeDanmakuListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UILabel *timeOffsetLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UIImageView *dislikeImageView;
@property (retain, nonatomic) UIButton *textButton;
@property (nonatomic) unsigned long long danmakuScene;
@property (retain, nonatomic) AWEDanmakuModel *danmakuModel;
@property (nonatomic) BOOL hasDigged;
@property (nonatomic) BOOL hasDisliked;
@property (weak, nonatomic) id<AWELandScapeDanmakuListTableViewCellDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;
+ (double)heightForCellWithFunctionModel:(id)a0 danmakuScene:(unsigned long long)a1;
+ (id)attributedString:(id)a0 danmakuScene:(unsigned long long)a1;
+ (id)identifier;

- (id)aAWEPadModuleAdapter;
- (void)configCellWithModel:(id)a0 danmakuScene:(unsigned long long)a1;
- (id)stringWithNSTimeInterval:(double)a0;
- (void)digDanmaku;
- (void)dislikeDanmaku;
- (void)clickDanmaku;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
