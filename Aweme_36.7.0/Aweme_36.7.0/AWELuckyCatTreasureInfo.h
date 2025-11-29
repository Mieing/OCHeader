@class NSString;

@interface AWELuckyCatTreasureInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long completedTimes;
@property (nonatomic) unsigned long long goldEggsNeededTimes;
@property (nonatomic) unsigned long long goldEggsReward;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
