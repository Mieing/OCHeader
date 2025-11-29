@class NSArray;

@interface DYAQuickSwitchAccountModelList : DYAPassportResponseModel

@property (copy, nonatomic) NSArray *accounts;

+ (id)accountsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
