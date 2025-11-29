@class UIColor;

@interface AWENearbyGrouponSegmentHeaderConfig : NSObject

@property (nonatomic) long long segmentHeaderHeight;
@property (nonatomic) long long segmentViewHeight;
@property (nonatomic) long long segmentViewOriginX;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long transformerBottomInset;

- (void)updateWithHeaderSticky:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
