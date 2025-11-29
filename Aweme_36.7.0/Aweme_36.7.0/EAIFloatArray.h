@class NSMutableData, NSString;

@interface EAIFloatArray : NSObject

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long length;
@property (readonly) const float *values;
@property (readonly, copy) NSString *stringValue;

- (id)copy;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (id)initWithSize:(unsigned long long)a0;
- (id)init;
- (id)mutableCopy;
- (id)initWithArray:(id)a0;
- (float)get:(unsigned long long)a0;
- (void)set:(unsigned long long)a0 value:(float)a1;
- (void)appendArray:(id)a0;
- (void)append:(float)a0;

@end
