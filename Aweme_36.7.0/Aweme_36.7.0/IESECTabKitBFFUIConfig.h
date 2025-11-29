@class IESECTabKitBFFTabBarStyle;

@interface IESECTabKitBFFUIConfig : NSObject

@property (nonatomic) double splitUpSlideMinY;
@property (nonatomic) double fullScreenStateY;
@property (nonatomic) double splitAutoUpSlideToFullY;
@property (nonatomic) BOOL disableAutoSlide;
@property (nonatomic) long long splitIndicatorTopOffset;
@property (retain, nonatomic) IESECTabKitBFFTabBarStyle *topTabBarStyle;
@property (retain, nonatomic) IESECTabKitBFFTabBarStyle *bottomTabBarStyle;

- (void).cxx_destruct;
- (id)init;

@end
