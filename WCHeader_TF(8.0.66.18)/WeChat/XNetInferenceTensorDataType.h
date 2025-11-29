@interface XNetInferenceTensorDataType : NSObject {
    int _underlying;
}

+ (id)dataTypeWithUnderlying:(const int *)a0;
+ (id)Int8;
+ (id)Int16;
+ (id)Int32;
+ (id)Int64;
+ (id)Float16;
+ (id)Float32;
+ (id)Float64;
+ (id)UInt8;
+ (id)UInt16;
+ (id)UInt32;
+ (id)UInt64;

- (id)initWithUnderlying:(const int *)a0;
- (const int *)underlying;
- (long long)stride;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDataType:(id)a0;

@end
