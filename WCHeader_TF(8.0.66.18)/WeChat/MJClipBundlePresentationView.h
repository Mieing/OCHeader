@class UIImageView, NSString, MJPublisherMovieCompositionTask;

@interface MJClipBundlePresentationView : UIView <MJPublisherMovieCompositionTaskExt>

@property (nonatomic) long long imageIndex;
@property (nonatomic) BOOL isPreviousTansAnimationDone;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *transitionImageViewOne;
@property (retain, nonatomic) UIImageView *transitionImageViewTwo;
@property (readonly, nonatomic) MJPublisherMovieCompositionTask *compositeTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCompositeTask:(id)a0;
- (void)commonInit;
- (void)updatePreviewImageAnimated:(id)a0;
- (void)setupNotifications;
- (void)handleBackingExportTaskHasFinishedNoti:(id)a0;
- (void)publisherMovieCompositionTask:(id)a0 didUpdateVideoEncodedFrame:(id)a1;
- (void).cxx_destruct;

@end
