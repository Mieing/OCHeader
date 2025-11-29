@class NSString, NSArray;

@interface IESPlatformSDKConfiguration : NSObject

@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productDisplayName;
@property (retain, nonatomic) NSArray *URLSchemes;
@property (copy, nonatomic) NSString *iTunesUri;

- (void).cxx_destruct;
- (id)init;

@end
