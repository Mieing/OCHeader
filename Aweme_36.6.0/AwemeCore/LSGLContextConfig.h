@class NSString;

@interface LSGLContextConfig : NSObject

@property (nonatomic) BOOL useES3;
@property (nonatomic) BOOL fixES3Issue;
@property (copy, nonatomic) NSString *queueName;

- (void).cxx_destruct;
- (id)init;
- (id)toDict;

@end
