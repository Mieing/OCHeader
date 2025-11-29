@class UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWEGrouponFeedLiveExperimentProductView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *liveContentInfoIcon;
@property (retain, nonatomic) UILabel *liveContentInfoTagLabel;
@property (retain, nonatomic) UIView *liveContentInfoSplitLine;
@property (retain, nonatomic) UILabel *liveContentInfoText;

+ (BOOL)canShowProductLabel:(id)a0;
+ (id)firstTagString:(id)a0;
+ (id)secondTagString:(id)a0;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateInfo:(id)a0;

@end
