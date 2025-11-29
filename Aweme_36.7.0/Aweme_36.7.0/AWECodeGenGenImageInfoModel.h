@class NSString, AWECodeGenRandomInfoModel;

@interface AWECodeGenGenImageInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long templateId;
@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingBottom;
@property (nonatomic) int styleId;
@property (retain, nonatomic) AWECodeGenRandomInfoModel *randomInfoModel;
@property (copy, nonatomic) NSString *imageBase64;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
