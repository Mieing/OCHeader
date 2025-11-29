@class NSString;

@interface AWECodeGenActivityAlbumMediaTagModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bgColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
