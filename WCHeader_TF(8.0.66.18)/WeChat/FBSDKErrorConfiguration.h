@class NSMutableDictionary;

@interface FBSDKErrorConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_configurationDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)recoveryConfigurationForCode:(id)a0 subcode:(id)a1 request:(id)a2;
- (void)parseArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
