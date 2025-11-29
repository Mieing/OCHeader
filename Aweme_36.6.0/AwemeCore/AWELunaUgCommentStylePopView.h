@class UIView, NSString, UIImage, NSArray, CALayer, UIImageView, AWELunaUgCommentPopViewSlogan, UITableView, YYLabel, UILabel, AWELunaUgCommentContentView;

@interface AWELunaUgCommentStylePopView : AWELunaUgPopView <UITableViewDelegate, UITableViewDataSource, AWELunaUgCommentStylePopViewCellDelegate>

@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *songCoverImageView;
@property (retain, nonatomic) UIView *songCoverShadowView;
@property (retain, nonatomic) YYLabel *relatedMusicTagLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *titleArrowIcon;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *likeInfoLabel;
@property (retain, nonatomic) AWELunaUgCommentContentView *commentContentView;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) UILabel *commentInfoLabel;
@property (retain, nonatomic) UITableView *commentTableView;
@property (retain, nonatomic) UITableView *loadingTableView;
@property (retain, nonatomic) AWELunaUgCommentPopViewSlogan *slogan;
@property (nonatomic) BOOL loadFailed;
@property (retain, nonatomic) CALayer *topCircularGradientLayer;
@property (retain, nonatomic) CALayer *imageGradientLayer;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSArray *mockCommentArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addPopViewLayerIfNeeded;
- (void)p_didClickCover;
- (void)didClickDiggIcon;
- (void)didClickContent;
- (void)configureBaseSettings;
- (BOOL)p_canShowRealComment;
- (void)p_didClickSlogan;
- (void)p_didClickPlayIcon;
- (id)p_mockSettingsConfig;
- (id)p_defaultArr;
- (id)p_mockCommentArray;
- (id)shuffleArray:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setUpUI;

@end
