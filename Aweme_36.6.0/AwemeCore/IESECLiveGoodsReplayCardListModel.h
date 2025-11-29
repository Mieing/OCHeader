@class NSNumber, NSArray, NSString;

@interface IESECLiveGoodsReplayCardListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSArray *productIdList;
@property (retain, nonatomic) NSArray *productReplayList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productIdListJSONTransformer;
+ (id)productReplayListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
