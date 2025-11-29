@class NSArray, NSString;

@interface AWEAnchorAdditionResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *modelList;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)tabsJSONTransformer;
+ (id)modelListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
