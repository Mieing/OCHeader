@class NSString;

@interface AWEMusicNewTagModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *tagTitleColor;
@property (copy, nonatomic) NSString *tagColor;
@property (copy, nonatomic) NSString *tagBorderColor;
@property (copy, nonatomic) NSString *tagType;
@property (copy, nonatomic) NSString *tagTitleLightColor;
@property (copy, nonatomic) NSString *tagLightColor;
@property (copy, nonatomic) NSString *tagBorderLightColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
