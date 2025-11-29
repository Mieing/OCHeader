@class NSString;

@interface AWESearchHotSpotDiscussInsertComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSString *dataTemplate;
@property (copy, nonatomic) NSString *rawDataTemplate;
@property (copy, nonatomic) NSString *renderInfoTemplate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
