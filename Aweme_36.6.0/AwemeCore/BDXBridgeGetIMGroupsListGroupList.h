@class NSString, NSNumber;

@interface BDXBridgeGetIMGroupsListGroupList : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *number;
@property (copy, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSNumber *isGroup;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSNumber *followStatus;
@property (copy, nonatomic) NSString *uid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
