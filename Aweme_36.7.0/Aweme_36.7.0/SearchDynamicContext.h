@class NSDictionary, NSString, NSData;

@interface SearchDynamicContext : NSObject

@property (copy, nonatomic) NSDictionary *lynxInitialData;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *sessionid;
@property (nonatomic) BOOL isAnnieX;
@property (nonatomic) BOOL isSSR;
@property (retain, nonatomic) NSData *ssrTemplateSource;
@property (copy, nonatomic) NSString *ssrHydrateUrl;
@property (retain, nonatomic) NSData *hydrateSource;
@property (nonatomic) long long hydrateType;
@property (nonatomic) BOOL shouldReuseRenderView;
@property (copy, nonatomic) NSString *cardTypeName;
@property (nonatomic) double containerWidth;

- (void).cxx_destruct;

@end
