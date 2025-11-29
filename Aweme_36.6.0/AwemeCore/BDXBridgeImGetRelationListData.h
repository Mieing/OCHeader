@class NSString, NSNumber;

@interface BDXBridgeImGetRelationListData : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSNumber *followStatus;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *gender;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
