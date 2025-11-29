@class NSSet;

@interface MVPlayerTimeRange : NSObject

@property (nonatomic) double startTimeInSecond;
@property (nonatomic) double durationInSecond;
@property (retain, nonatomic) NSSet *videoIdentifiers;

- (id)init;
- (id)initWithStartTime:(double)a0 duration:(double)a1;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
