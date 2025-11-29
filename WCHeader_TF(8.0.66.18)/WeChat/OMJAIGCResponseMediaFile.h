@class OMJAIGCMediaFile;

@interface OMJAIGCResponseMediaFile : NSObject

@property (retain, nonatomic) OMJAIGCMediaFile *mediaFile;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameRect;

- (id)initWithMediaFile:(id)a0 frameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
