@class NSString;

@interface IESLLPOIAlbumPageTypeInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) long long pageType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
