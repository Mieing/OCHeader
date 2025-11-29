@class NSString, NSArray, NSDictionary;

@interface MMWebOptimizationPrefetchRequest : MMObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;
@property (nonatomic) BOOL canRedirect;
@property (retain, nonatomic) NSArray *resUrls;
@property (retain, nonatomic) NSDictionary *httpHeader;
@property (nonatomic) BOOL shouldPrefetchContent;
@property (copy, nonatomic) NSString *pkgAppId;
@property (copy, nonatomic) NSString *pkgUserName;
@property (nonatomic) BOOL isUseSingletonVM;
@property (nonatomic) unsigned int prefetchMode;
@property (nonatomic) unsigned int fetchPkgType;
@property (copy, nonatomic) NSString *transferScope;

- (id)description;
- (void).cxx_destruct;

@end
