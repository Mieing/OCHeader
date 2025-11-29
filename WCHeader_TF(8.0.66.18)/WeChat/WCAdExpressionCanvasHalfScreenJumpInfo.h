@class NSArray, UIViewController, WCFinderFeedContentVM;
@protocol WCCanvasHalfScreenViewControllerDelegate;

@interface WCAdExpressionCanvasHalfScreenJumpInfo : NSObject

@property (nonatomic) BOOL isHalfScreen;
@property (weak, nonatomic) UIViewController *halfScreenFromVC;
@property (weak, nonatomic) id<WCCanvasHalfScreenViewControllerDelegate> halfScreenDelegate;
@property (nonatomic) BOOL shouldCheckHalfScreenDelegate;
@property (retain, nonatomic) WCFinderFeedContentVM *halfScreenFinderFeedContentVM;
@property (nonatomic) double halfScreenHeightRatio;
@property (nonatomic) BOOL shouldForbidPanUpGesture;
@property (nonatomic) BOOL bulletCommentSwitch;
@property (copy, nonatomic) NSArray *relatedPageIds;

- (void).cxx_destruct;

@end
