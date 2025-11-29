@class IESLLifeURLModel;

@interface IESLLImageInfo : IESLLifeBaseApiModel

@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (retain, nonatomic) IESLLifeURLModel *large;
@property (retain, nonatomic) IESLLifeURLModel *thumb;

+ (id)largeJSONTransformer;
+ (id)thumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
