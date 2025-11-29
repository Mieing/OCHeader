@class NSString, NSArray, NSDictionary;

@interface AWEGeneralSearchPatchCachalotModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *deletefps;
@property (copy, nonatomic) NSArray *businessData;
@property (copy, nonatomic) NSArray *renderInfo;
@property (copy, nonatomic) NSDictionary *structData;
@property (copy, nonatomic) NSDictionary *reorderStruct;
@property (copy, nonatomic) NSArray *patchData;

+ (id)patchOperationsModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
