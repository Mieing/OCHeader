@class AWEIncentiveDYFreqConfigModel, NSArray, NSString;

@interface AWEIncentiveDYFeedVVDiversionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long switchEnable;
@property (retain, nonatomic) AWEIncentiveDYFreqConfigModel *freqConf;
@property (copy, nonatomic) NSArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
