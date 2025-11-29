@class NSString;

@interface AWEIMUserHighActiveInfoResponseModel : AWEBaseApiModel <MTLJSONSerializing, NSCoding>

@property (nonatomic) unsigned long long highActiveStatus;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) BOOL alwaysLanding;
@property (nonatomic) int activeLevel;
@property (nonatomic) BOOL showGuide;
@property (nonatomic) int landingInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
