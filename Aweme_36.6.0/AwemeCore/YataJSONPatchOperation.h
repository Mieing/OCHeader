@class YataJSONElement, NSDictionary, NSError, YataJSONPointer;

@interface YataJSONPatchOperation : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long operationType;
@property (retain, nonatomic) YataJSONPointer *path;
@property (retain, nonatomic) YataJSONElement *value;
@property (retain, nonatomic) YataJSONPointer *from;
@property (readonly, nonatomic) NSDictionary *JSONObject;

- (id)initWithJSONObject:(id)a0 index:(long long)a1;
- (void)operationInitialized:(id)a0 index:(long long)a1;
- (id)parseVal:(id)a0 op:(id)a1 field:(id)a2 index:(long long)a3 class:(Class)a4;
- (id)initWithChangeOperation:(id)a0;
- (void).cxx_destruct;

@end
