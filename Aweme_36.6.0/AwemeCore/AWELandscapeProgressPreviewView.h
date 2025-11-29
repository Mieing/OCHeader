@class AWEAwemeModel, UIView, UIImage, NSString, NSMutableDictionary, UIImageView, AWEBigThumbModel, UILabel;
@protocol AWELandscapeChapterViewProtocol;

@interface AWELandscapeProgressPreviewView : UIView

@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *targetTimeLabel;
@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *totalTimelabel;
@property (retain, nonatomic) UIView<AWELandscapeChapterViewProtocol> *chapterView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (retain, nonatomic) NSMutableDictionary *engineBigImageDict;
@property (retain, nonatomic) NSMutableDictionary *requestBigThumbDict;
@property (nonatomic) BOOL requestBigThumb;
@property (copy, nonatomic) NSString *enterFrom;

- (BOOL)isNewThumbnailData;
- (id)getThumbnailImgUrlByModel:(id)a0 index:(long long)a1;
- (BOOL)useCommonThumbnailLogic;
- (id)dashThumbInfo;
- (void)getVideoPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (id)framePreviewImageForProgress:(double)a0 totalDuration:(double)a1 originalImage:(id)a2;
- (BOOL)hasChapterList;
- (BOOL)hasLvideoHighLightList;
- (void)refreshPreviewImageWithBigImage:(id)a0 progressPercent:(double)a1;
- (long long)getProgressThumbIndexWithTaregtTime:(double)a0 totalTime:(double)a1;
- (void)refreshPreviewImageWithTaregtTime:(double)a0 totalTime:(double)a1;
- (BOOL)shouldHidePreviewCollectionViewWithTargetTimeInSec:(double)a0;
- (id)targetEngineBigImageWithTaregtTime:(double)a0 totalTime:(double)a1;
- (void)updateWithModel:(id)a0 enterFrom:(id)a1;
- (void)showPreviewWithTaregtTime:(double)a0 totalTime:(double)a1;
- (void)scrollChapterToIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)timeLabelFont;
- (void)setupUI;

@end
