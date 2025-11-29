@class NSString;

@interface IESECLiveGoodsCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *buyTitle;
@property (retain, nonatomic) NSString *bgImageURL;
@property (retain, nonatomic) NSString *bannerImageURL;
@property (retain, nonatomic) NSString *vibeImageURL;
@property (retain, nonatomic) NSString *bannerTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
