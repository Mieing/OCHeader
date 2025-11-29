@class NSString, NSArray;

@interface IESSDKProductConfiguration : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appSecret;
@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productDisplayName;
@property (retain, nonatomic) NSArray *installedURLSchemes;
@property (retain, nonatomic) NSArray *supportedURLSchemes;
@property (copy, nonatomic) NSString *iTunesUri;

- (void).cxx_destruct;
- (id)init;

@end
