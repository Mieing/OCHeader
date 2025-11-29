@class WCDataItem, NSString, WCMediaItem, WCSightFullPlayView, UIButton;
@protocol WCSightFullPlayViewControllerDelegate;

@interface WCSightFullPlayViewController : MMUIViewController <WCSightFullPlayViewDelegate> {
    UIButton *m_bgButton;
    WCSightFullPlayView *m_sightFullPlayView;
}

@property (weak, nonatomic) id<WCSightFullPlayViewControllerDelegate> m_delegate;
@property (retain, nonatomic) WCMediaItem *m_mediaData;
@property (retain, nonatomic) WCDataItem *m_dataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMediaData:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)stopPlayWithAnimated:(BOOL)a0;
- (void)layoutAllSubviews:(BOOL)a0;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)onClickFullPlayView;
- (void)onLongPressFullPlayView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)onClickFullSightView:(id)a0;
- (void)onLongPressedFullSightView:(id)a0;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickDetailButton;
- (void)onFullSightPlayEnd:(BOOL)a0;
- (id)getDetailButtonTitle;
- (BOOL)shouldShowDetailButton;
- (void)onFullSightDownloadFinished:(id)a0 downloadType:(long long)a1;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryRotateOrientation;
- (void).cxx_destruct;

@end
