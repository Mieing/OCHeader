@class NSString;

@interface WCCanvasRadarChartItemInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *score;
@property (nonatomic) double value;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
