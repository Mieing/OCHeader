@class NSArray, NSString, IESECShopLiveInfoModel;

@interface IESECShopMediaInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopLiveInfoModel *liveInfo;
@property (copy, nonatomic) NSArray *videoInfos;
@property (nonatomic) long long showType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
