@class MJComposingBGMAdjustPanelView, MJComposingBGMTimeRangeAdjustView, NSString, MJComposingBGMAdjustViewModel, MJComposingBGMVolumeAdjustView;
@protocol MJComposingBGMAdjustContentViewDelegate;

@interface MJComposingBGMAdjustContentView : MMUIView <MJComposingBGMAdjustPanelViewDelegate, MJComposingBGMVolumeAdjustViewDelegate>

@property (retain, nonatomic) MJComposingBGMAdjustPanelView *panelView;
@property (retain, nonatomic) MJComposingBGMVolumeAdjustView *volumeView;
@property (retain, nonatomic) MJComposingBGMTimeRangeAdjustView *timeRangeView;
@property (nonatomic) unsigned long long scene;
@property (readonly, nonatomic) MJComposingBGMAdjustViewModel *viewModel;
@property (weak, nonatomic) id<MJComposingBGMAdjustContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)resetToMainPanel;
- (void)update;
- (void)didClickCloseButtonInBGMPanelView:(id)a0;
- (void)didClickVolumeAdjustButtonInBGMPanelView:(id)a0;
- (void)didClickTimeRangeAdjustButtonInBGMPanelView:(id)a0;
- (void)didClickLyricUpdateButtonInBGMPanelView:(id)a0;
- (void)didCloseInBGMVolumeAdjustView:(id)a0;
- (void)_transFromPanelViewToVolumeAdjustViewAnimated:(BOOL)a0;
- (void)_transFromPanelViewToTimeRangeAdjustViewAnimated:(BOOL)a0;
- (void)_transFromVolumeAdjustViewToPanelViewAnimated:(BOOL)a0;
- (void)_transFromTimeRangeAdjustViewToPanelViewAnimated:(BOOL)a0;
- (void)setupPanelView;
- (void)setupVolumeView;
- (void)setupTimeRangeView;
- (void).cxx_destruct;

@end
