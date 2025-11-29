@class NSString, UIImageView, UIImage, UILabel, UIView, IESLivePlaybackSeekProgressText;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackSeekVerticalPreview : UIView <IESLivePlaybackSeekPreview>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLivePlaybackSeekProgressText *progressText;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *preImageView;
@property (retain, nonatomic) UIImageView *hotTagView;
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
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;

@end
