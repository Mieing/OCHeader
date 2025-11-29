@class UIColor;

@interface IESGCPLivePlayerScaleConfig : NSObject

@property (nonatomic) BOOL needRightPanelMask;
@property (nonatomic) BOOL needTopSafeArea;
@property (retain, nonatomic) UIColor *rightPanelBackgroundColor;
@property (nonatomic) BOOL needLeftTopAndBottomCorner;
@property (nonatomic) double panelCustomWidth;
@property (nonatomic) double showAnimationDuration;
@property (nonatomic) double closeAnimationDuration;
@property (nonatomic) BOOL acceptCloseFromPuzzleEnable;

- (void).cxx_destruct;
- (id)init;

@end
