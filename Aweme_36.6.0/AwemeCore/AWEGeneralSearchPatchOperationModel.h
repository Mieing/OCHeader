@class NSString, NSArray;

@interface AWEGeneralSearchPatchOperationModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSArray *patchOperationDataArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
