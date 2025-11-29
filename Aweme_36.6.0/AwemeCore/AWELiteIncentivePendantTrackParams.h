@class NSString;

@interface AWELiteIncentivePendantTrackParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *rewardMethod;
@property (copy, nonatomic) NSString *taskStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
