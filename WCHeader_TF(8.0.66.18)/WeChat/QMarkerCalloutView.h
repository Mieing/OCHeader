@class NSString, UIImage, QMarkerView;

@interface QMarkerCalloutView : QOverlayView

@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *imgInstruction;
@property (weak, nonatomic) QMarkerView *parentMarkerView;
@property (retain, nonatomic) UIImage *calloutImage;

+ (void)loadCaloutViewImageWithQMarkerView:(id)a0 withCallback:(id /* block */)a1;
+ (id)getImageFromTitle:(id)a0 andSubtitle:(id)a1;
+ (double)calculateStringDrawingWidth:(id)a0 fontSize:(double)a1;

- (void).cxx_destruct;

@end
