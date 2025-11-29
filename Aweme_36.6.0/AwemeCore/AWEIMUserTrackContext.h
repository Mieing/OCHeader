@class NSString;

@interface AWEIMUserTrackContext : NSObject

@property (nonatomic) long long inputCount;
@property (nonatomic) long long outputCount;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL isSecUid;
@property (nonatomic) double startTime;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL forbidCheckMainThread;

- (id)initWithInputCount:(long long)a0 startTime:(double)a1;
- (void).cxx_destruct;

@end
