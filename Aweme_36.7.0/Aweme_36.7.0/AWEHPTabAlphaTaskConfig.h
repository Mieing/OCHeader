@class NSString, NSNumber;

@interface AWEHPTabAlphaTaskConfig : AWEHPBaseUIControlTaskConfig <NSCopying>

@property (copy, nonatomic) NSString *callerID;
@property (copy, nonatomic) NSNumber *alpha;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
