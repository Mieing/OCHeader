@class NSString;

@interface AWEFormatRouterParamSearch : JSONModel

@property (nonatomic) long long formatId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchResultId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *listItemId;
@property (nonatomic) BOOL searchIsLogin;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
