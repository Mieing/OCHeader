@class NSString, UIView, LLDitoNode, LLDitoStickyWrapperView;

@interface LLDitoStickyViewStoreModel : NSObject

@property (retain, nonatomic) NSString *stickyId;
@property (retain, nonatomic) LLDitoNode *node;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInBodyConcertNodeMargin;
@property (nonatomic) double scrollViewContentOffsetYWhenStickToTop;
@property (nonatomic) double stickySubviewTopMargin;
@property (retain, nonatomic) LLDitoStickyWrapperView *wrapper;
@property (nonatomic) BOOL isSubviewSticky;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stickUntilComponentFrameConcernMargin;
@property (retain, nonatomic) UIView *stickView;
@property (retain, nonatomic) UIView *stickyViewOriginSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stickyViewOriginFrame;
@property (nonatomic) double stickyViewOriginPointX;

- (void).cxx_destruct;
- (id)init;

@end
