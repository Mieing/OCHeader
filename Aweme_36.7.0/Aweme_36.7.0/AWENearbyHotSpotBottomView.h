@class NSString, UIImageView, AWEAwemeModel, UIView, UILabel, UIButton;
@protocol AWENearbyHotSpotBottomViewDelegate;

@interface AWENearbyHotSpotBottomView : UIView

@property (retain, nonatomic) UIButton *leftButtonView;
@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UIView *poiMaskView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *poiDesLabel;
@property (retain, nonatomic) UIButton *poiCollectView;
@property (retain, nonatomic) UIButton *rightButtonView;
@property (retain, nonatomic) UIImageView *collectionImageView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long bizType;
@property (weak, nonatomic) id<AWENearbyHotSpotBottomViewDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;

- (void)enableInteraction;
- (void)leftButtonClicked;
- (void)rightButtonClicked;
- (id)initWithBizType:(unsigned long long)a0;
- (void)trackButtonClick:(id)a0;
- (void)trackButtonShow;
- (void)updateBottomView:(id)a0 animate:(BOOL)a1;
- (void)updateCollectBtn:(BOOL)a0;
- (id)makeAttrByDistance:(id)a0 poiViewCountText:(id)a1;
- (id)schemaTrackerData;
- (void)collected:(unsigned long long)a0 poiId:(id)a1 animation:(BOOL)a2;
- (void)collected:(unsigned long long)a0 poiId:(id)a1;
- (void)onCollect:(id)a0;
- (void)updateFavoriteType:(unsigned long long)a0 poiId:(id)a1;
- (void).cxx_destruct;
- (void)disableInteraction;
- (void)setupUI;

@end
