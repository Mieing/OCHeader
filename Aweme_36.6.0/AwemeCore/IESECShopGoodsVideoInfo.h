@class NSString, IESECURLModel, IESECShopGoodsVideoInfoPlayerIcon;

@interface IESECShopGoodsVideoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoID;
@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) IESECURLModel *url;
@property (nonatomic) long long maximumDuration;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESECShopGoodsVideoInfoPlayerIcon *playerIcon;
@property (nonatomic) BOOL showPlayerIconWhenStatic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
