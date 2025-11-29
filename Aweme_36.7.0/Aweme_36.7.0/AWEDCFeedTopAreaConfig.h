@class AWEDCFeedTopAreaSearchConfig;
@protocol AWEDCFeedTopAreaDelegate;

@interface AWEDCFeedTopAreaConfig : AWEDCFeedBaseConfig

@property (nonatomic) double innerHeight;
@property (nonatomic) long long areaType;
@property (nonatomic, getter=getHeight) double height;
@property (weak, nonatomic) id<AWEDCFeedTopAreaDelegate> topAreaDelegate;
@property (nonatomic) long long hoveredType;
@property (nonatomic) long long viewPosition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customViewInsets;
@property (nonatomic) double moveMinOffset;
@property (nonatomic) double moveMaxOffset;
@property (nonatomic) BOOL isHovered;
@property (retain, nonatomic) AWEDCFeedTopAreaSearchConfig *searchConfig;

- (void)setupDefaultConfig;
- (BOOL)checkTopAreaAvailable;
- (void).cxx_destruct;

@end
