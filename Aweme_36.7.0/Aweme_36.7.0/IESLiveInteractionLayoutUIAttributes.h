@protocol IESLiveInteractionLayoutCanvas;

@interface IESLiveInteractionLayoutUIAttributes : NSObject

@property (readonly, nonatomic) id<IESLiveInteractionLayoutCanvas> canvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } publicScreenPlaceholderRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;

- (void).cxx_destruct;

@end
