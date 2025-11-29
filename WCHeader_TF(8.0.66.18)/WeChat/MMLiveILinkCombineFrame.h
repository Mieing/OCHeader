@interface MMLiveILinkCombineFrame : NSObject

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } position;
@property (nonatomic) double xRotate;
@property (nonatomic) double yRotate;
@property (nonatomic) double zRotate;
@property (nonatomic) double xTranslate;
@property (nonatomic) double yTranslate;
@property (nonatomic) double alpha;
@property (nonatomic) double scale;

- (id)init;
- (void)dealloc;

@end
