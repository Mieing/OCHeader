@class NSNumber, NSString;

@interface IESLLLiveShelfCardListItemCardDataExecutionPlan : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *activityId;
@property (copy, nonatomic) NSNumber *goodId;
@property (copy, nonatomic) NSString *tagUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
