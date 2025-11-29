@class NSArray;
@protocol IESLiveLinkmicLayoutCanvas;

@interface IESLiveLinkmicLayoutUIAttributes : NSObject

@property (retain, nonatomic) id<IESLiveLinkmicLayoutCanvas> canvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } seatListRect;
@property (copy, nonatomic) NSArray *seatList;
@property (copy, nonatomic) NSArray *slots;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;

- (id)copy;
- (void).cxx_destruct;
- (id)description;

@end
