@class NSNumber, AWEMusicDetailInspirationPropBodyModel;

@interface AWEMusicDetailInspirationPropResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWEMusicDetailInspirationPropBodyModel *propBodyModel;

+ (id)propBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
