@class AWESearchTransformOffsetModel;

@interface AWESearchPlayerInteractorTransformContainerComponentModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchTransformOffsetModel *offsetModel;

+ (id)offsetModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
