@class NSString;

@interface LiveCoreRunInfo : NSObject

@property (nonatomic) BOOL firstStart;
@property (nonatomic) double firstStartTime;
@property (nonatomic) BOOL pushedOnce;
@property (copy, nonatomic) NSString *project_key;

- (void).cxx_destruct;
- (id)init;

@end
