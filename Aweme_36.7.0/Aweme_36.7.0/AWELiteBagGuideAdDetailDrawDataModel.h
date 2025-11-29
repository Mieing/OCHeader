@class NSString, AWELiteBagGuideAdDetailDrawDataExtraModel;

@interface AWELiteBagGuideAdDetailDrawDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long reward_type;
@property (nonatomic) long long ad_count;
@property (copy, nonatomic) NSString *enter_from;
@property (nonatomic) BOOL need_reward;
@property (copy, nonatomic) NSString *ad_from;
@property (copy, nonatomic) NSString *creator_id;
@property (retain, nonatomic) AWELiteBagGuideAdDetailDrawDataExtraModel *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
