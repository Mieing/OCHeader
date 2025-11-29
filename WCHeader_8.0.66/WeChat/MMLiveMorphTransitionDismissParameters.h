@class MMLiveMorphDismissTargetExtraConfig, UIView;
@protocol MMLiveMorphDismissSource;

@interface MMLiveMorphTransitionDismissParameters : MMLiveMorphTransitionParameters

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (retain, nonatomic) MMLiveMorphDismissTargetExtraConfig *extraConfig;
@property (retain, nonatomic) UIView *customSnapView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) id<MMLiveMorphDismissSource> sourceContext;

- (void).cxx_destruct;

@end
