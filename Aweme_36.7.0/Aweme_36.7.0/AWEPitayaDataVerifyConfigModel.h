@class NSArray;

@interface AWEPitayaDataVerifyConfigModel : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *sceneArray;

+ (id)mergeArray:(id)a0 and:(id)a1;
+ (id)sceneArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
