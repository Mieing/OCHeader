@class NSString;

@interface AWECardContext : NSObject

@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemZoomScale;
@property (nonatomic) double itemMargin;
@property (nonatomic) double itemCornerRadius;
@property (copy, nonatomic) NSString *itemBorderColorActive;
@property (copy, nonatomic) NSString *itemBorderColorDeactive;
@property (nonatomic) double itemBorderWidthActive;
@property (nonatomic) double itemBorderWidthDeactive;

+ (id)defaultContext;

- (void).cxx_destruct;

@end
