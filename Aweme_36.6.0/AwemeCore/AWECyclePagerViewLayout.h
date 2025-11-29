@class UIView;

@interface AWECyclePagerViewLayout : NSObject

@property (weak, nonatomic) UIView *pageView;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) double minimumScale;
@property (nonatomic) double minimumAlpha;
@property (nonatomic) double maximumAngle;
@property (nonatomic) double rateOfChange;
@property (nonatomic) BOOL adjustSpacingWhenScroling;
@property (nonatomic) BOOL itemVerticalCenter;
@property (nonatomic) BOOL itemHorizontalCenter;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } onlyOneSectionInset;
@property (nonatomic) unsigned long long direction;

- (void).cxx_destruct;
- (id)init;

@end
