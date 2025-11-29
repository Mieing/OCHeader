@class AWEECShareInvalidDeal, NSString;

@interface AWEECSharePanelInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL invalidShareInfo;
@property (retain, nonatomic) AWEECShareInvalidDeal *invalidDeal;
@property (nonatomic) BOOL disableToken;
@property (nonatomic) BOOL isMarketPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)invalidDealJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
