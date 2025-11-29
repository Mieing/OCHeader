@interface AWEStudioEditImpl.AIEraserEditorViewController : UIViewController <AWEAIEraserTrasnsitionAnimeProtocol> {
    void /* unknown type, empty encoding */ isFromFPComponent;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ creationID;
    void /* unknown type, empty encoding */ inputImage;
    void /* unknown type, empty encoding */ currentTypes;
    void /* unknown type, empty encoding */ renderSize;
    void /* unknown type, empty encoding */ eraseMaterialImage;
    void /* unknown type, empty encoding */ lastSelectedSliderValue;
    void /* unknown type, empty encoding */ currentSegmentImage;
    void /* unknown type, empty encoding */ currentSegmentImagePixels;
    void /* unknown type, empty encoding */ pendingSegmentOperationInfo;
    void /* unknown type, empty encoding */ initialNode;
    void /* unknown type, empty encoding */ undoStack;
    void /* unknown type, empty encoding */ currentImage;
    void /* unknown type, empty encoding */ selectedTab;
    void /* unknown type, empty encoding */ publishModel;
    void /* unknown type, empty encoding */ cancelBrushPreviewAutoDismiss;
    void /* unknown type, empty encoding */ schedulerMap;
    void /* unknown type, empty encoding */ lottieView;
    void /* unknown type, empty encoding */ hintLabel;
    void /* unknown type, empty encoding */ currentImageURICheckTask;
    void /* unknown type, empty encoding */ isTabBrushPreviewAnimating;
    void /* unknown type, empty encoding */ settingsConfig;
    void /* unknown type, empty encoding */ eraseMaxLongSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mosaicSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableContoursAnimation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentEraseAlgoJSON;
    void /* unknown type, empty encoding */ $__lazy_storage_$_manualEraseAlgoJSON;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentEraseDilateSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_manualEraseDilateSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eraseTimeout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentTimeout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentMaxEntity;
    void /* unknown type, empty encoding */ maskCreateDuration;
    void /* unknown type, empty encoding */ eraseStartStamp;
    void /* unknown type, empty encoding */ isFirstSelect;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paintBoard;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autoSelectMaskImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_completeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_startEraseView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eraseLoadingView;
}

@property (nonatomic) BOOL needTrimZoomTranstionIn;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)startEraseButtonAction:(id)a0;
- (id)zoomTransitionEndView;
- (void)completeButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
