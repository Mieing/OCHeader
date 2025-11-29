@class AWEAwemeModel, UIView, NSString, AWERelatedVideoPlayingAnimationView, AWEPageContext, UIImageView, AWEChapterInfo, UILabel, AWEChapterContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEChapterDetailTableViewCell : UITableViewCell <AWEChapterTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timestampLabel;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *playingAnimationView;
@property (retain, nonatomic) UIView *hintAreaView;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) AWEChapterInfo *chapterInfo;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *contextInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEChapterContext *chapterContext;
@property (nonatomic) BOOL isLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithChapterInfo:(id)a0 width:(double)a1 context:(id)a2;
+ (BOOL)hasURLForChapterInfo:(id)a0;
+ (id)identifier;

- (void)configWithUIConfig:(id)a0;
- (void)updateSelectedStatus:(BOOL)a0;
- (BOOL)useCommonThumbnailLogic;
- (void)configureWithChapterInfo:(id)a0 model:(id)a1 context:(id)a2 coverImageLoadCompletion:(id /* block */)a3;
- (BOOL)getChapterEcomWordsTestValue;
- (id)getTrackSearchParams:(BOOL)a0;
- (id)framePreviewImageForProgress:(double)a0 model:(id)a1 originalImage:(id)a2;
- (void)getVideoPreviewImageIndex:(long long)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)jumpEcomSearch;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setupUI;

@end
