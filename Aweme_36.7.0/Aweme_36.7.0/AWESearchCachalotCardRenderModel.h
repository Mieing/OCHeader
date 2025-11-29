@class NSString;

@interface AWESearchCachalotCardRenderModel : AWEBaseApiModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *cardTypeName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
