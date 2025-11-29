@class MttMemory;

@interface MttMemoryObjValue : MttMemoryCommon

@property (nonatomic) int tag;
@property (nonatomic) int pos;
@property (retain, nonatomic) MttMemory *obj;

+ (id)instanceWithPropertyInfo:(id)a0;

- (id)JSONObject;
- (void).cxx_destruct;

@end
