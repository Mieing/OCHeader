@class NSDictionary;

@interface AWEIMLaunchIOTrackerTarget : NSObject

@property (nonatomic) long long targetType;
@property (nonatomic) double duration;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDictionary *cmdIDCountDict;

- (void).cxx_destruct;

@end
