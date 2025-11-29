@class IESLLifeURLModel;

@interface IESLLVideoModel : IESLLifeBaseApiModel

@property (retain, nonatomic) IESLLifeURLModel *coverURL;
@property (readonly, nonatomic) IESLLifeURLModel *originCover;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
