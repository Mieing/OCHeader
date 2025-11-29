@interface MttMemoryBasicValue : MttMemoryCommon

@property (nonatomic) int pos;
@property (nonatomic) int size;
@property (nonatomic) long long value;
@property (nonatomic) BOOL flag;

+ (id)instanceWithPropertyInfo:(id)a0;

- (id)JSONObject;

@end
