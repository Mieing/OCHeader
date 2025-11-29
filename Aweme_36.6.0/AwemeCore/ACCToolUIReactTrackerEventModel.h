@class NSString;

@interface ACCToolUIReactTrackerEventModel : NSObject

@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) double reactDuration;
@property (nonatomic) long long actionCount;

- (id)getCustomTrackParams;
- (void).cxx_destruct;

@end
