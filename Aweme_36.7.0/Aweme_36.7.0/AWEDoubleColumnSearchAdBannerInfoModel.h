@class NSString;

@interface AWEDoubleColumnSearchAdBannerInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) BOOL isSelected;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
