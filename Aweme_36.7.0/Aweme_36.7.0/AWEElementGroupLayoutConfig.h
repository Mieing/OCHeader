@interface AWEElementGroupLayoutConfig : NSObject

@property (nonatomic) long long layoutType;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) double itemSpacing;

+ (id)horizontalLayoutWithScrollEnable:(BOOL)a0 itemSpacing:(double)a1;
+ (id)verticalLayout;

- (id)init;

@end
