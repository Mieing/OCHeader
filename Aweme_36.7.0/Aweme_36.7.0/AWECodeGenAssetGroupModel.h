@class NSString, NSArray;

@interface AWECodeGenAssetGroupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *assetidsArray;
@property (copy, nonatomic) NSString *coverassetid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
