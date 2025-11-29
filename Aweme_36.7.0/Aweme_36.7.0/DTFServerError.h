@class NSString;

@interface DTFServerError : NSError

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retcodeSub;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *comment;

+ (id)errorWithReason:(id)a0 comment:(id)a1;
+ (id)errorWithRetCode:(id)a0;
+ (id)errorWithRetCodeSub:(id)a0;

- (void).cxx_destruct;
- (id)localizedDescription;

@end
