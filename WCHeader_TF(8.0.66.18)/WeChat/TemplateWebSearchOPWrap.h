@class NSString;

@interface TemplateWebSearchOPWrap : NSObject

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *extParams;
@property (copy, nonatomic) NSString *thirdExtParam;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) BOOL isHomePage;
@property (nonatomic) BOOL hideSearchBar;
@property (copy, nonatomic) NSString *navBarTitle;

+ (id)opWrapWithJSON:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
