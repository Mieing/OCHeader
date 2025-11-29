@class NSString;

@interface AWEPOIAlbumHighlightModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitleColor;
@property (copy, nonatomic) NSString *tag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
