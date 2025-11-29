@class UIColor, NSString;

@interface WAAppOpenSheetModeParameter : MMObject

@property (nonatomic) BOOL m_bEmbedModeAllowFullScreen;
@property (nonatomic) BOOL m_bShouldForbidExitWhenTapBackground;
@property (nonatomic) unsigned long long m_uDismissTypeWhenTapBackground;
@property (nonatomic) BOOL m_bShouldPassEventToViewUnderneathWhenTapBackground;
@property (nonatomic) BOOL m_bShouldBlurBackground;
@property (nonatomic) double m_fHeight;
@property (nonatomic) struct CGSize { double width; double height; } m_fSize;
@property (nonatomic) double m_fExpandedHeight;
@property (nonatomic) BOOL m_bEnableExpandToStatusBarTop;
@property (nonatomic) struct CGSize { double width; double height; } m_fSizeInLandscape;
@property (nonatomic) unsigned long long m_uRectCorner;
@property (nonatomic) double m_fCornerRadius;
@property (nonatomic) BOOL m_bEnableExpandGesture;
@property (nonatomic) BOOL m_bForbidExpandDragUpGesture;
@property (nonatomic) BOOL m_bForbidPageContentExpandDragUpGesture;
@property (nonatomic) BOOL m_bForbidExpandTapGesture;
@property (nonatomic) BOOL m_bEnableRecoverGestureAfterExpand;
@property (nonatomic) BOOL m_bEnableExpandGestureOnEveryPage;
@property (retain, nonatomic) UIColor *m_oSheetBackgroundColor;
@property (nonatomic) BOOL m_bShowDraggingBar;
@property (nonatomic) BOOL m_bForceShowCapsuleMenuWhileShowingDraggingBar;
@property (copy, nonatomic) NSString *m_nsHeaderTipsText;
@property (copy, nonatomic) id /* block */ m_headerTipsDidShowBlock;
@property (copy, nonatomic) id /* block */ m_headerTipsDidClickCloseBlock;

- (void).cxx_destruct;

@end
