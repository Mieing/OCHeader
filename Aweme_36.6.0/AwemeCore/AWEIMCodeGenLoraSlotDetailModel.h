@class NSString;

@interface AWEIMCodeGenLoraSlotDetailModel : AWEBaseDataModel

@property (nonatomic) long long userId;
@property (nonatomic) long long roleType;
@property (copy, nonatomic) NSString *modelId;
@property (nonatomic) long long slotCreateTime;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
