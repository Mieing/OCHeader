@interface MMFinderLiveConnectMicVideoUserInfoView : MMFinderLiveConnectMicBaseUserInfoView

@property (nonatomic) BOOL isGlobalSmallMode;
@property (nonatomic) BOOL isInFullScreenPKStyle;
@property (readonly, nonatomic) double contentWidth;

- (void)show;
- (void)updateHeadImageViewSize;
- (BOOL)needDisplayGlobalRankSignView;
- (unsigned long long)viewType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayNormalizedFrame;
- (double)nameLabelFontSize;
- (void)layoutUI;
- (void)updateMicMutedButtonAppearance;

@end
