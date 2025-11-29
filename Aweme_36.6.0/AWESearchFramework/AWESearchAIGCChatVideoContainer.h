@class UIImageView, UILabel, UIView;
@protocol AWESearchAIGCVideoCoverProvider;

@interface AWESearchAIGCChatVideoContainer : UIView

@property (retain, nonatomic) UIImageView *imageContainer;
@property (retain, nonatomic) UIView *leftTopView;
@property (retain, nonatomic) UILabel *leftTopLabel;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) id<AWESearchAIGCVideoCoverProvider> provider;

+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithModel:(id)a0;
+ (id)failPlaceholderImage;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithImage:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithModel:(id)a0 enableProgress:(BOOL)a1;
+ (void)setAIGCVideoModelProgress:(id)a0 progress:(double)a1;
+ (void)setAIGCVideoModel:(id)a0 isFromSevenSplitScreen:(BOOL)a1;
+ (void)setAIGCVideoModel:(id)a0 isEnterFullScreen:(BOOL)a1;
+ (id)loadingPlaceholderImage;

- (void)addGesture;
- (void)setupSubViews;
- (void)updateVideoWithModel:(id)a0;
- (void)imageContainerTap:(id)a0;
- (void)searchAIPageClickTrack;
- (void)shouldHideLeftTopView:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
