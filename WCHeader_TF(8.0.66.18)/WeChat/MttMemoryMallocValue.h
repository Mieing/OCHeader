@interface MttMemoryMallocValue : MttMemoryCommon

@property (nonatomic) int tag;
@property (nonatomic) int size;

+ (id)instanceWithPropertyInfo:(id)a0;

- (id)JSONObject;

@end
