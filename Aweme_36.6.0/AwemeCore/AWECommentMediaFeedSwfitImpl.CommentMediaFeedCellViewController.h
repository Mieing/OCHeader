@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedCellViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ pageNewContext;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ playInteractionViewController;
    void /* unknown type, empty encoding */ isPureMode;
    void /* unknown type, empty encoding */ isSwitchPureModeNextDidEndZooming;
    void /* unknown type, empty encoding */ lastZoomScale;
    void /* unknown type, empty encoding */ zoomActionType;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ initialZoomScale;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishTag;
    void /* unknown type, empty encoding */ singleTap;
    void /* unknown type, empty encoding */ doubleTap;
    void /* unknown type, empty encoding */ gradientBackView;
    void /* unknown type, empty encoding */ topGradientView;
    void /* unknown type, empty encoding */ bottomGradientView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mediaInteractionType;
    void /* unknown type, empty encoding */ currentIndexInMultiImageList;
    void /* unknown type, empty encoding */ hasInputView;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ sceneTypeString;
    void /* unknown type, empty encoding */ mediaFeedEnterActionType;
    void /* unknown type, empty encoding */ parentVC;
}

- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)actionForDoubleTapWithGes:(id)a0;
- (void)actionForSingleTapWithGes:(id)a0;
- (void)doubleTapToZoomWithGes:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
