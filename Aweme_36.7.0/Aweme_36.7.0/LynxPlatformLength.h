@class NSArray;

@interface LynxPlatformLength : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;
@property (retain, nonatomic) NSArray *calcArray;

- (double)valueWithParentValue:(double)a0;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (double)numberValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
