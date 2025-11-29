@class NSString, AWEAdSearchPlayletTagModel;

@interface AWEAdSearchPlayletLabelModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAdSearchPlayletTagModel *paidTag;
@property (retain, nonatomic) AWEAdSearchPlayletTagModel *rewardAdTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paidTagJSONTransformer;
+ (id)rewardAdTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
