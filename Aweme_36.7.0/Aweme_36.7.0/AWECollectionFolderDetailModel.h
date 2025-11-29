@class NSArray;

@interface AWECollectionFolderDetailModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *collectInfos;

+ (id)collectInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
