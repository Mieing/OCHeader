@class NSString, NSNumber, NSDictionary;

@interface TTAccountPlatformEntity : TTAccountBaseEntity

@property (copy) NSString *openId;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *platformUID;
@property (copy, nonatomic) NSString *secPlatformUID;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *platformScreenName;
@property (copy, nonatomic) NSString *profileImageURL;
@property (retain, nonatomic) NSNumber *modifyTime;
@property (retain, nonatomic) NSNumber *expiredIn;
@property (retain, nonatomic) NSNumber *expiredTime;
@property (copy, nonatomic) NSString *platformAppId;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithThirdAccountModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
