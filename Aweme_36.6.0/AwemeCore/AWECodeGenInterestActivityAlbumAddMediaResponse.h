@class NSArray;

@interface AWECodeGenInterestActivityAlbumAddMediaResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *mediaListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
