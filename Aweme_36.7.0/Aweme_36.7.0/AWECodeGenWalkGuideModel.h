@class NSString, AWECodeGenSicilyUrlModel;

@interface AWECodeGenWalkGuideModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenSicilyUrlModel *guideImageModel;
@property (retain, nonatomic) AWECodeGenSicilyUrlModel *guideImageThumbModel;
@property (copy, nonatomic) NSString *guideText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
