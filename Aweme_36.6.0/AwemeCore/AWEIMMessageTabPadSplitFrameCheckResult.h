@class NSString, UIView;

@interface AWEIMMessageTabPadSplitFrameCheckResult : NSObject <AWEIMMessageTabPadSplitFrameCheckResult>

@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) BOOL frameChanged;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
