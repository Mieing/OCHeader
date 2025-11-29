@class NSArray;

@interface IESIMGroupConfirmPageConfig : AWEBaseApiModel

@property (nonatomic) BOOL needShow;
@property (retain, nonatomic) NSArray *showFeatureList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
