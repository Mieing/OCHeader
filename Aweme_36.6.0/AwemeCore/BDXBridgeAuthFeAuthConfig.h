@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeAuthFeAuthConfig : NSObject

@property (copy, nonatomic) NSString *feID;
@property (nonatomic) BOOL isFromContentV2;
@property (nonatomic) long long access;
@property (copy, nonatomic) NSArray *includeMethods;
@property (copy, nonatomic) NSArray *excludedMethods;
@property (copy, nonatomic) NSNumber *secureAuthVersion;
@property (copy, nonatomic) NSDictionary *methodControlLimitInfo;
@property (nonatomic) long long source;

+ (id)initWithBDXContentV2Config:(id)a0 config:(id)a1 source:(long long)a2;
+ (id)initWithNoConfig;
+ (id)initWithContentV2Config:(id)a0 config:(id)a1 source:(long long)a2;
+ (id)initWithContentConfig:(long long)a0 includedMethods:(id)a1 excludedMethods:(id)a2;
+ (id)initWithPrivateAccess:(long long)a0;

- (id)initWithDefaultValue:(id)a0 isFromContentV2:(BOOL)a1 access:(long long)a2 includedMethods:(id)a3 excludedMethods:(id)a4 secureAuthVersion:(id)a5 methodControlLimitInfo:(id)a6 source:(long long)a7;
- (void).cxx_destruct;

@end
