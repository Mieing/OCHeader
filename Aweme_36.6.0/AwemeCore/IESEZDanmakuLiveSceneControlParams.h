@class IESEZDanmakuSettingConfiguration, UIView;

@interface IESEZDanmakuLiveSceneControlParams : NSObject

@property (weak, nonatomic) UIView *canvasView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } canvasSafeArea;
@property (nonatomic) BOOL shouldClearAllDanmaku;
@property (retain, nonatomic) IESEZDanmakuSettingConfiguration *settingConfiguration;
@property (nonatomic) BOOL enableSingleTrackStrategy;
@property (nonatomic) BOOL hideDanmaku;

- (void).cxx_destruct;

@end
