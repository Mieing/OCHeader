@class NSDictionary, NSString;

@interface IESECMallDeepFeedTrackInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *standardTrackParam;
@property (retain, nonatomic) NSDictionary *standardChainParam;
@property (retain, nonatomic) NSString *standardProductMarketingParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
