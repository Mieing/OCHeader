@class NSString;

@interface VeCoreInfo : NSObject

@property (readonly, nonatomic) NSString *shortVersion;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *countryCode;

+ (id)defaultInfo;

@end
