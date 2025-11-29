@class NSString;

@interface AWEHPBaseUIControlTaskConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *callerID;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
