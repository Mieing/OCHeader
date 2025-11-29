@class NSString;

@interface RTVFinishForwardTask : NSObject

@property (readonly, copy, nonatomic) NSString *finishForwardSchema;
@property (readonly, nonatomic) long long forwardType;

- (id)initWithFinishForwardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
