@class IESLiveCountTimer;

@interface IESLiveRevenueInteractStreamFrameMonitor : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct CGSize { double width; double height; } targetVideoSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetCropFrame;
@property (retain, nonatomic) IESLiveCountTimer *cropCheckTimer;
@property (copy, nonatomic) id /* block */ videoSizeBlock;
@property (copy, nonatomic) id /* block */ videoCropAreaSizeBlock;
@property (copy, nonatomic) id /* block */ trackParamsBlock;

- (id)initWithDIContext:(id)a0 fromScene:(unsigned long long)a1;
- (id)dynamicMonitorParams;
- (void)cancelCropCheck;
- (void)checkDiffWithBaseParams:(id)a0 remainCount:(long long)a1;
- (void)startCropCheckWithVideoSize:(struct CGSize { double x0; double x1; })a0 cropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isPreview:(BOOL)a2;
- (void).cxx_destruct;

@end
