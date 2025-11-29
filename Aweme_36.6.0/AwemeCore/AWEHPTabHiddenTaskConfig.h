@class NSString, NSNumber;

@interface AWEHPTabHiddenTaskConfig : AWEHPBaseUIControlTaskConfig <NSCopying>

@property (copy, nonatomic) NSString *callerID;
@property (copy, nonatomic) NSNumber *hidden;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
