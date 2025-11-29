@class NSString, NSDictionary;

@interface IESLiveAnchorInteractiveGameXplayInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *xplayGameId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long orientation;
@property (nonatomic) long long pcWidthRatio;
@property (nonatomic) long long pcHeightRatio;
@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *mobileH5Url;
@property (nonatomic) BOOL supportGuideEnable;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
