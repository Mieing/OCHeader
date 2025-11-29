@class NSString;

@interface AWECodeGenFamiliarTolerateModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tolerateScene;
@property (nonatomic) BOOL useTolerate;
@property (nonatomic) int tolerateSolution;
@property (nonatomic) BOOL isGrey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
