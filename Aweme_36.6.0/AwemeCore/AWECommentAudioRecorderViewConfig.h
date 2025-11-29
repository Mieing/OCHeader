@class UIView;

@interface AWECommentAudioRecorderViewConfig : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } startpoint;
@property (weak, nonatomic) UIView *startView;
@property (weak, nonatomic) UIView *inputVCView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputVCFrame;

- (void).cxx_destruct;

@end
