@class NSString;

@interface MttMemoryStrValue : MttMemoryCommon

@property (nonatomic) int pos;
@property (nonatomic) int size;
@property (retain, nonatomic) NSString *value;

+ (id)instanceWithPropertyInfo:(id)a0;

- (id)JSONObject;
- (void).cxx_destruct;

@end
