@class NSString, NSArray, NSDictionary;

@interface MMWebCoreConfig : MMObject

@property (copy, nonatomic) NSString *referer;
@property (retain, nonatomic) NSArray *arrUserScript;
@property (retain, nonatomic) NSDictionary *dictCustomWebviewEnvInfo;
@property (nonatomic) BOOL enableOauthSnapShotMode;

- (void).cxx_destruct;

@end
