@class NSString, NSDictionary, AWENativeButtonInfoModel;

@interface AWEAdNativeAnchorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isLocalAd;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) double latitude;
@property (nonatomic) double longtitude;
@property (copy, nonatomic) NSDictionary *adEventData;
@property (retain, nonatomic) AWENativeButtonInfoModel *buttonInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
