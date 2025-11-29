@interface ACCSlidesBeatSequenceGeneratorConfig : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double imageMinValue;
@property (nonatomic) double imageMaxValue;
@property (nonatomic) double imageDefaultValue;
@property (nonatomic, getter=isLongFirst) BOOL longFirst;
@property (nonatomic) double videoMinValue;
@property (nonatomic) double videoMaxValue;

- (id)init;

@end
