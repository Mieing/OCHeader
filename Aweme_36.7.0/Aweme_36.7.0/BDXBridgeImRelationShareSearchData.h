@class NSString, NSNumber;

@interface BDXBridgeImRelationShareSearchData : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *followStatus;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *conversationId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCon:(id)a0;
- (id)initWithIMUser:(id)a0;
- (void).cxx_destruct;

@end
