@class NSString, NSDictionary;

@interface LSIMPlatformServiceModel : LSIMBaseApiModel

@property (readonly, copy, nonatomic) NSString *jumpURL;
@property (readonly, copy, nonatomic) NSDictionary *jumpURLs;

@end
