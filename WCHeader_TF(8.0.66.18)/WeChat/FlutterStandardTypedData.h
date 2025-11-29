@class NSData;

@interface FlutterStandardTypedData : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned int elementCount;
@property (readonly, nonatomic) unsigned char elementSize;

+ (id)typedDataWithBytes:(id)a0;
+ (id)typedDataWithInt32:(id)a0;
+ (id)typedDataWithInt64:(id)a0;
+ (id)typedDataWithFloat32:(id)a0;
+ (id)typedDataWithFloat64:(id)a0;
+ (id)typedDataWithData:(id)a0 type:(long long)a1;

- (id)initWithData:(id)a0 type:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
