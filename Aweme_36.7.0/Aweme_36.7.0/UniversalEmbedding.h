@class GPBFloatArray;

@interface UniversalEmbedding : GPBMessage

@property (retain, nonatomic) GPBFloatArray *valueArray;
@property (readonly, nonatomic) unsigned long long valueArray_Count;

+ (id)descriptor;

- (id)valueArray;

@end
