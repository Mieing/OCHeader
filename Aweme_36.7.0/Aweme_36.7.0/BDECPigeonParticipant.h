@class NSString, NSDictionary;

@interface BDECPigeonParticipant : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nick;
@property (copy, nonatomic) NSString *pigeonId;
@property (copy, nonatomic) NSString *participatorBizId;
@property (nonatomic) long long participatorRoleType;
@property (copy, nonatomic) NSString *groupBizId;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *messageNoticeConfig;
@property (nonatomic) long long validStatus;
@property (copy, nonatomic) NSDictionary *extend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageNoticeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
