@class NSString;

@interface BDASifXBridgeGetAdUserProfileMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
