@class NSString, UIImageView, UIImage, UILabel, UIView, HTSLiveAmazingBackgroundView;
@protocol IESLiveSeekProgressTextProtocal, IESLiveWebPPlayer;

@interface IESLiveSeekLandscapePreview : UIView <IESLiveSeekPreviewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView<IESLiveSeekProgressTextProtocal> *progressText;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *preImageView;
@property (retain, nonatomic) UIImageView *hotTagView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bottomMaskView;
@property (retain, nonatomic) UIImage *defaultImg;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOrientation:(BOOL)a0;
- (void)endLoading;
- (void)updatePreviewImage:(id)a0;
- (void)updatePreViewProgress:(double)a0 progress:(id)a1 duration:(id)a2 hasProgressBar:(BOOL)a3;
- (void)updateHighlightTitle:(id)a0 hasHotTag:(BOOL)a1;
- (void)disableShowPreviewImage;
- (id)initForNormalLive;
- (void)switchShowStyle:(BOOL)a0;
- (void)updatePreviewImageWithLiveImage:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;

@end
