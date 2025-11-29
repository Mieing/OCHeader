@class NSError;

@interface ACCResult : NSObject

@property (readonly, nonatomic) id successValue;
@property (readonly, nonatomic) NSError *errorValue;

+ (id)successWithVoid;
+ (id)success:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSuccess;
- (id)initWithSuccess:(id)a0 error:(id)a1;

@end
