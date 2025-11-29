@class NSMutableArray;

@interface MttMemory : MttMemoryCommon

@property (nonatomic) int memorySize;
@property (retain, nonatomic) NSMutableArray *values;

+ (id)instanceWithPropertyInfo:(id)a0;
+ (id)fromJSONString:(id)a0;

- (id)JSONObject;
- (id)JSONString;
- (void).cxx_destruct;

@end
