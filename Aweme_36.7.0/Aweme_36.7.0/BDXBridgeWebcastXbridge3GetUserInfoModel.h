@class NSString;

@interface BDXBridgeWebcastXbridge3GetUserInfoModel : BDXBridgeModel

@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL isBoundPhone;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
