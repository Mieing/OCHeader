@interface MJTimeRulerScale : NSObject

@property (nonatomic) double timeUnit;
@property (nonatomic) double minSpacing;
@property (nonatomic) double maxSpacing;
@property (nonatomic) long long submarkCount;
@property (nonatomic) double minSpacingBetweenSubmarks;
@property (copy, nonatomic) id /* block */ timeCodeFormatter;

+ (id)timeRulerScaleWithLevel:(unsigned long long)a0 frameRate:(float)a1;

- (id)description;
- (void).cxx_destruct;

@end
