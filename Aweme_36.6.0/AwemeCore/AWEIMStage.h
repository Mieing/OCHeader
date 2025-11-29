@class NSError;

@interface AWEIMStage : NSObject

@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContext:(id)a0;
- (void)start;

@end
