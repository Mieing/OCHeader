@class NSString, UIImageView, UILabel, UIView;
@protocol IESLiveSeekProgressTextProtocal;

@interface IESLiveSeekPortraitPreview : UIView <IESLiveSeekPreviewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView<IESLiveSeekProgressTextProtocal> *progressText;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *hotTagView;
@property (retain, nonatomic) UIView *currentProgress;
@property (retain, nonatomic) UIView *progressBg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOrientation:(BOOL)a0;
- (void)updatePreViewProgress:(double)a0 progress:(id)a1 duration:(id)a2 hasProgressBar:(BOOL)a3;
- (void)updateHighlightTitle:(id)a0 hasHotTag:(BOOL)a1;
- (id)initForNormalLive;
- (void)disablePreviewProgress;
- (void)switchShowStyle:(BOOL)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)updateProgress:(double)a0;

@end
