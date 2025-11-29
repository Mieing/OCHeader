@class NSString;

@interface AWELiteBagGuideAdModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *adRit;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) BOOL needOneStageAmount;
@property (copy, nonatomic) NSString *rewardAmount;
@property (copy, nonatomic) NSString *adSession;
@property (copy, nonatomic) NSString *drawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
