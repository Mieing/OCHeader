@class NSArray, IESECLiveReplayGoodsListHeaderNavigation, NSString;

@interface IESECLiveReplayGoodsListHeader : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderNavigation *navigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entriesJSONTransformer;
+ (id)navigationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
