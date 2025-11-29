@class NSArray, NSString;

@interface IESECTabKitSecurityConfigV2 : NSObject

@property (copy, nonatomic) NSArray *apiUrlHost;
@property (copy, nonatomic) NSArray *anchorUrlHost;
@property (nonatomic) long long verifyMode;
@property (copy, nonatomic) NSString *version;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
