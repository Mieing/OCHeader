@class NSString, NSArray;

@interface MMWebPrefetchInjectTaskRequest : MMObject

@property (nonatomic) unsigned int requestId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *arrResInfo;
@property (copy, nonatomic) NSString *codePkgPath;
@property (nonatomic) BOOL htmlStringInPkg;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;

- (void).cxx_destruct;

@end
