@class NSString, NSNumber;

@interface BDXBridgeGetUserInfoUserInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSNumber *hasBoundPhone;
@property (retain, nonatomic) NSNumber *isBoundPhone;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
