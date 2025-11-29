@class NSString, NSArray, NSDictionary, NSNumber;

@interface NHAccountUser : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isBlocking;
@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSNumber *point;
@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSString *mobile;
@property (retain, nonatomic) NSNumber *gender;
@property (retain, nonatomic) NSString *verifiedAgency;
@property (retain, nonatomic) NSArray *connects;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *verifiedContent;
@property (retain, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSNumber *isBlocked;
@property (retain, nonatomic) NSNumber *userVerified;
@property (retain, nonatomic) NSString *screenName;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) double loginInterval;
@property (copy, nonatomic) NSDictionary *extraValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraModelOfClass:(Class)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
