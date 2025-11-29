@class NSString, NSArray;

@interface AWEGeneralFilmTVLeadingCreatorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *actor;

+ (id)actorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
