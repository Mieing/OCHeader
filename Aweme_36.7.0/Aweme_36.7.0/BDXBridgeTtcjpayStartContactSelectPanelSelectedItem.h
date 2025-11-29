@class NSString;

@interface BDXBridgeTtcjpayStartContactSelectPanelSelectedItem : BDXBridgeModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *userName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
