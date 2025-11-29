@class UIColor, NSArray;

@interface WAMapPolygonData : NSObject

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) long long displayLevel;
@property (nonatomic) NSArray *dashArray;

- (void).cxx_destruct;

@end
