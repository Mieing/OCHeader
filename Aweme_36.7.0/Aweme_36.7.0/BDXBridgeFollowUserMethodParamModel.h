@class NSNumber, NSString;

@interface BDXBridgeFollowUserMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *action;
@property (retain, nonatomic) NSNumber *channelId;
@property (retain, nonatomic) NSNumber *fromAction;
@property (retain, nonatomic) NSNumber *fromPageType;
@property (retain, nonatomic) NSNumber *prePageType;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *sec_user_id;
@property (copy, nonatomic) NSString *cid;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
