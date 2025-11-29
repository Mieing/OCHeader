@interface AWEIMExamControlInfo : NSObject

@property (nonatomic) long long examId;
@property (nonatomic) long long examStatus;
@property (nonatomic) long long validTime;
@property (nonatomic) unsigned long long type;

- (id)initWithDict:(id)a0;

@end
