@class NSNumber, AWEMusicDetailInspirationTemplateBodyModel;

@interface AWEMusicDetailInspirationTemplateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWEMusicDetailInspirationTemplateBodyModel *templateBodyModel;

+ (id)templateBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
