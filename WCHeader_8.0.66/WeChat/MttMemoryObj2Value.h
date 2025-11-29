@class MttMemory;

@interface MttMemoryObj2Value : MttMemoryCommon

@property (nonatomic) int parent;
@property (nonatomic) int offset;
@property (nonatomic) int pos;
@property (retain, nonatomic) MttMemory *obj;

+ (id)instanceWithPropertyInfo:(id)a0;

- (id)JSONObject;
- (void).cxx_destruct;

@end
