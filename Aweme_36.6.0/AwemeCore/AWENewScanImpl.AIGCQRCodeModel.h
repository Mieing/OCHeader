@class AWEURLModel;

@interface AWENewScanImpl.AIGCQRCodeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) AWEURLModel *codeURL;
@property (nonatomic, retain) AWEURLModel *backgroundURL;
@property (nonatomic) long long type;
@property (nonatomic) long long createTime;

+ (id)codeURLJSONTransformer;
+ (id)backgroundURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
