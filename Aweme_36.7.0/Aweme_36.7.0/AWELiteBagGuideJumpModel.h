@class NSString, AWELiteBagGuideAdModel;

@interface AWELiteBagGuideJumpModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *redirectTaskKey;
@property (nonatomic) long long redirectTaskId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *expandScene;
@property (copy, nonatomic) NSString *luckyBagScene;
@property (nonatomic) long long jumpType;
@property (retain, nonatomic) AWELiteBagGuideAdModel *adModel;
@property (copy, nonatomic) NSString *feData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
