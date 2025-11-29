@class NSString, NSError;

@interface ACCAIGCAsyncPostProcessTrackInfoModel : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSError *mainTrackError;

- (void).cxx_destruct;
- (id)trackIdentifier;

@end
