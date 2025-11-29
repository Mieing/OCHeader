@class NSString;

@interface BUPLMotionModel : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *codeMsg;

+ (id)successModel;
+ (id)unavailableModel;
+ (id)errorModelWithCode:(long long)a0 errorMsg:(id)a1;

- (void).cxx_destruct;

@end
