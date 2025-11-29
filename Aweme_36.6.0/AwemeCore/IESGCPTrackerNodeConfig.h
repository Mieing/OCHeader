@interface IESGCPTrackerNodeConfig : NSObject

@property (nonatomic) long long actions;
@property (nonatomic) BOOL needAutoReport;
@property (nonatomic) BOOL needRouteAttribute;
@property (nonatomic) BOOL needMarkFirstShow;
@property (nonatomic) double exposeAreaRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) BOOL useCustomCommonParams;

@end
