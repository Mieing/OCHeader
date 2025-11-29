@class UIColor;

@interface IESLiveXPlayGameConfiguration : NSObject

@property (nonatomic) BOOL showPanelFloatingViewItem;
@property (nonatomic) BOOL showContainerClearScreenButton;
@property (nonatomic) BOOL showContainerAnchorPreView;
@property (nonatomic) BOOL showNetworkQualityStatus;
@property (nonatomic) long long containerAnchorPreViewPosition;
@property (nonatomic) BOOL containerAnchorPreViewIsInMinStatus;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } previewAreaInset;
@property (nonatomic) double containerAnchorPreViewSizeRatio;
@property (nonatomic) BOOL isDefaultClearScreen;
@property (retain, nonatomic) UIColor *instanceBackgroundColor;

- (void).cxx_destruct;
- (id)init;

@end
