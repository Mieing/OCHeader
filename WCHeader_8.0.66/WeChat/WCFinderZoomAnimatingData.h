@class UIView, WCFinderTransitionUserInfo;

@interface WCFinderZoomAnimatingData : NSObject

@property (retain, nonatomic) WCFinderTransitionUserInfo *userInfo;
@property (retain, nonatomic) UIView *snapView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapOriginFrame;
@property (nonatomic) double snapCornerRadius;
@property (retain, nonatomic) UIView *snapContainer;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL closeDirectly;

- (void)dealloc;
- (void).cxx_destruct;

@end
