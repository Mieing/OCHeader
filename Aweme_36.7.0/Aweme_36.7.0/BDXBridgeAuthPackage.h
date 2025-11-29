@class BDXBridgeAuthModelV2, NSString, NSDictionary, BDXOverriddenMethodPackage, NSNumber;

@interface BDXBridgeAuthPackage : NSObject <NSCoding>

@property (retain, nonatomic) NSNumber *packageVersion;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSDictionary *content;
@property (retain, nonatomic) BDXBridgeAuthModelV2 *contentV2;
@property (readonly, nonatomic) BDXOverriddenMethodPackage *overriddenMethodPackage;
@property (readonly, nonatomic, getter=isBridgeAuthInfo) BOOL bridgeAuthInfo;
@property (readonly, copy, nonatomic) NSString *namespace;

- (id)validatedContentWithDict:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
