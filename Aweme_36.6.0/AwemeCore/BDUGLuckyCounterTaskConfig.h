@class NSString;

@interface BDUGLuckyCounterTaskConfig : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) unsigned long long sourceType;

- (id)initWithToken:(id)a0 taskName:(id)a1 activityName:(id)a2 sourceType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
