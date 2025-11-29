@class UIImageView, NSDictionary, AWEOneDayStoryWithCommentModel, UIViewController;
@protocol AWEDPlayerProtocol;

@interface AWEOrangeStoryCellMediaWrapper : UIView

@property (nonatomic) BOOL hasRefreshedData;
@property (retain, nonatomic) UIImageView *imagePlayerView;
@property (copy, nonatomic) NSDictionary *paramDic;
@property (retain, nonatomic) AWEOneDayStoryWithCommentModel *commenStoryModel;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *playerViewController;
@property (nonatomic) BOOL shouldShowPlayIcon;
@property (nonatomic) BOOL isOnSight;

+ (BOOL)isImage:(id)a0;
+ (BOOL)isVideo:(id)a0;

- (void)refreshWithCommentStoryModel:(id)a0 paramDic:(id)a1;
- (id)newImagePlayerView;
- (void)setupVideoPlayerViewController;
- (void)updateVideoPlayerWithOneDayModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;

@end
