@class NSString;

@interface AWEMusicStreamingImpl.LunaMembership : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ membershipType;
    void /* function */ vipLabelSuffix;
    void /* function */ modifierVipLabelSuffix;
    void /* function */ lastMembershipType;
}

@property (nonatomic) long long expireDate;
@property (nonatomic) BOOL inGracePeriod;
@property (nonatomic) BOOL isMembership;
@property (nonatomic, copy) NSString *membershipType;
@property (nonatomic) BOOL isPayingUserL;
@property (nonatomic, copy) NSString *vipLabelSuffix;
@property (nonatomic, copy) NSString *modifierVipLabelSuffix;
@property (nonatomic, copy) NSString *lastMembershipType;
@property (nonatomic, readonly) BOOL isExpired;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
