@class NSString;

@interface PAGMarker : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *comment;

- (void)dealloc;

@end
