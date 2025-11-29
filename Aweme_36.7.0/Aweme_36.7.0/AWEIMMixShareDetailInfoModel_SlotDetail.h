@class NSString;

@interface AWEIMMixShareDetailInfoModel_SlotDetail : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *modelID;
@property (nonatomic) long long slotCreateTime;
@property (nonatomic) long long roleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
