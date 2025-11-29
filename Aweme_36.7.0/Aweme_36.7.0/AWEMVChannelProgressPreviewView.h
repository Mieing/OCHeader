@class AWEAwemeModel, UIView, UIImage, NSString, UIImageView, AWEBigThumbModel, AWEGradientView, UILabel;

@interface AWEMVChannelProgressPreviewView : UIView

@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *targetTimeLabel;
@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *totalTimelabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (nonatomic) BOOL requestBigThumb;
@property (copy, nonatomic) NSString *enterFrom;

- (BOOL)useCommonThumbnailLogic;
- (id)dashThumbInfo;
- (void)getVideoPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (id)framePreviewImageForProgress:(double)a0 totalDuration:(double)a1 originalImage:(id)a2;
- (void)refreshPreviewImageWithBigImage:(id)a0 progressPercent:(double)a1;
- (void)refreshPreviewImageWithTaregtTime:(double)a0 totalTime:(double)a1;
- (void)updateWithModel:(id)a0 enterFrom:(id)a1;
- (void)showPreviewWithTaregtTime:(double)a0 totalTime:(double)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)timeLabelFont;
- (void)setupUI;

@end
