@class NSDictionary, UIColor, NSNumber;

@interface RTVSegmentControlConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (copy, nonatomic) NSDictionary *selectedTextAttributes;
@property (retain, nonatomic) UIColor *segmentBlockColor;
@property (retain, nonatomic) NSNumber *defaultIndexValue;

- (void).cxx_destruct;

@end
