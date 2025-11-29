@class NSData, NSString;

@interface VEUniformData : NSObject

@property (retain, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) int byteSize;
@property (readonly, nonatomic) long long type;

- (id)initWithFloatValue:(float)a0 name:(id)a1;
- (id)initWithIntValue:(int)a0 name:(id)a1;
- (id)initWithIntArray:(const int *)a0 length:(int)a1 count:(int)a2 type:(long long)a3 name:(id)a4;
- (id)initWithFloatArray:(const float *)a0 length:(int)a1 count:(int)a2 type:(long long)a3 name:(id)a4;
- (void).cxx_destruct;
- (float)floatValue;
- (int)intValue;
- (const void *)bytes;

@end
