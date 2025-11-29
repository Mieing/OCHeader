@class NSString, WCPIPTextStateDescription;

@interface MMFinderLiveStateTextWidgetObj : WCPIPAttachWidgetObj

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) WCPIPTextStateDescription *textDescription;
@property (nonatomic) struct CGSize { double width; double height; } sizeText;
@property (copy, nonatomic) id /* block */ getStateTextContainerSizeCallback;

- (id)initWithTextDescription:(id)a0 businessId:(id)a1;
- (void)refresh;
- (id)getSnapshotUserBackImage;
- (id)imageWithTitle:(id)a0 font:(id)a1 textColor:(id)a2 topMargin:(double)a3 maskColor:(id)a4;
- (id)getCompositedIconImage:(id)a0 withMaskImage:(id)a1;
- (double)iconImageCenterPercent;
- (double)iconImageTop;
- (double)titleTextTop;
- (struct CGSize { double x0; double x1; })getMainVideoViewSize;
- (id)textFont;
- (id)textColor;
- (id)maskColor;
- (void).cxx_destruct;

@end
