@class UIView;

@interface WCFinderZoomCacheData : NSObject

@property (retain, nonatomic) UIView *snapView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapOriginFrame;
@property (nonatomic) double snapCornerRadius;

- (void).cxx_destruct;

@end
