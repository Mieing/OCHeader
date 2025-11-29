@class NSString;

@interface BDXBridgeImRequestContactListContactList : BDXBridgeModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
