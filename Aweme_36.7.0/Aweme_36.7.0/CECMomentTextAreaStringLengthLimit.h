@interface CECMomentTextAreaStringLengthLimit : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long limit;

+ (unsigned long long)characterCount:(id)a0;

- (unsigned long long)sizeOf:(id)a0;
- (id)trim:(id)a0 textCount:(inout long long *)a1;
- (BOOL)validate:(id)a0;

@end
