@class NSString, NSNumber, NSArray;

@interface BDECPigeonTransferStaffInfoModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nick;
@property (nonatomic) unsigned long long bizOnlineStatus;
@property (copy, nonatomic) NSNumber *maxServiceNum;
@property (copy, nonatomic) NSNumber *currServiceNum;
@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
