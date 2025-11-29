@class NSString, NSNumber;

@interface BDXBridgeGetIMGroupInfoGroupInfoList : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *memberCount;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *conversationId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
