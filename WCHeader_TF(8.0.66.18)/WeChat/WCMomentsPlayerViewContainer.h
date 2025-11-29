@class NSArray, NSString, MMImageScrollViewHelper, MMScrollViewZoomReporter, UIView;
@protocol WCMomentsPlayerViewContainerDelegate;

@interface WCMomentsPlayerViewContainer : MMUIScrollView <MMImageScrollViewHelperDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper;
@property (retain, nonatomic) UIView *playerView;
@property (nonatomic) struct CGSize { double width; double height; } originVideoSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } suitableVideoFrame;
@property (retain, nonatomic) MMScrollViewZoomReporter *zoomReporter;
@property (nonatomic) long long browseScene;
@property (weak, nonatomic) id<WCMomentsPlayerViewContainerDelegate> containerDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
