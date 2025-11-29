@class NSString, AWEDouyinSelectExtraModel, AWERelatedFeedHotSpot, AWECodeGenDouyinSelectAbConfModel;

@interface AWERelatedFeedExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *respFrom;
@property (copy, nonatomic) NSString *filterReason;
@property (copy, nonatomic) NSString *placer;
@property (copy, nonatomic) NSString *sortExtra;
@property (copy, nonatomic) NSString *diversionTitle;
@property (copy, nonatomic) NSString *diversionTitleUninstall;
@property (retain, nonatomic) AWECodeGenDouyinSelectAbConfModel *abConf;
@property (copy, nonatomic) NSString *serverTimeCost;
@property (retain, nonatomic) AWERelatedFeedHotSpot *hotspot;
@property (retain, nonatomic) AWEDouyinSelectExtraModel *douyinSelectExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)douyinSelectExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
