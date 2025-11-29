@class UIView;

@interface BDXLynxSwiperViewLayout : NSObject

@property (weak, nonatomic) UIView *pageView;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double startMargin;
@property (nonatomic) double endMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) double minimumScale;
@property (nonatomic) double minimumAlpha;
@property (nonatomic) double maximumAngle;
@property (nonatomic) double maxXScale;
@property (nonatomic) double minXScale;
@property (nonatomic) double maxYScale;
@property (nonatomic) double minYScale;
@property (nonatomic) double normTranslationFactor;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) double rateOfChange;
@property (nonatomic) BOOL adjustSpacingWhenScroling;
@property (nonatomic) BOOL vertical;
@property (nonatomic) BOOL itemVerticalCenter;
@property (nonatomic) BOOL itemHorizontalCenter;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } onlyOneSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } firstSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } lastSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } middleSectionInset;
@property (nonatomic) BOOL isRTL;

- (void).cxx_destruct;
- (id)init;

@end
