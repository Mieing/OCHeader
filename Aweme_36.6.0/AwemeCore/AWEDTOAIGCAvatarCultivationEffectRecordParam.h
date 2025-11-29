@class NSString;

@interface AWEDTOAIGCAvatarCultivationEffectRecordParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isArCheckin;
@property (copy, nonatomic) NSString *avatarId;
@property (copy, nonatomic) NSString *dressingId;
@property (nonatomic) long long checkInDay;
@property (copy, nonatomic) NSString *checkInScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
