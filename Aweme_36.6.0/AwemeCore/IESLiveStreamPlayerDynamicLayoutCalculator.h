@class IESLiveStreamPlayerLayoutDynamicConfig;

@interface IESLiveStreamPlayerDynamicLayoutCalculator : NSObject

@property (retain, nonatomic) IESLiveStreamPlayerLayoutDynamicConfig *config;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMediaContainerFrame;
- (double)calculateTopSpacing;
- (double)bottomYPosition;
- (double)streamWidthRatio;
- (double)getMediaWidthHeightRatio;
- (double)streamHeightRatio;
- (double)mixWidthHeightRatio;
- (double)activityDefaultTopSpacing;
- (double)standardMargin;
- (double)toolbarDefaultBottomSpacing;
- (double)defaultPreviewBottomSpacing;
- (void).cxx_destruct;
- (void)process;
- (id)initWithConfig:(id)a0;

@end
