@class IESLiveAioLinkNormalizedRect, UIView;
@protocol IESLiveRoomService;

@interface IESLivePetRabbitLayout : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationContainerRect;
@property (retain, nonatomic) IESLiveAioLinkNormalizedRect *interactRect;
@property (retain, nonatomic) UIView *animationLynxContainer;

- (id)initWith:(id)a0 componentContext:(id)a1;
- (void)updateInteractRect;
- (id)normalizedRectToString:(id)a0;
- (id)convertRectToPetRabbitDNC:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateInteractRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateAnimationContainerRect;
- (void).cxx_destruct;

@end
