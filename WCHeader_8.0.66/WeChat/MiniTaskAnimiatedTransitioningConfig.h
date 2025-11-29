@class UIImage, MinimizeTaskData;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskAnimiatedTransitioningConfig : NSObject

@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *frontImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrameToSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrameToWindow;
@property (nonatomic) MinimizeTaskData *taskData;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> animationDelegate;
@property (nonatomic) double fadeAnimateDuration;
@property (nonatomic) BOOL isFlutterScenes;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellRectToSnapshotRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;

@end
