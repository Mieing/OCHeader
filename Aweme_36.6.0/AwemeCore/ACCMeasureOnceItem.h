@class NSString;

@interface ACCMeasureOnceItem : NSObject

@property (nonatomic) BOOL didSet;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
