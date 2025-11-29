@class NSString, IESECURLModel, AWEURLModel;

@interface AWEAwemeGoodsExtra : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *bgVideoPlayURL;
@property (retain, nonatomic) IESECURLModel *bgVideoCoverURL;
@property (retain, nonatomic) NSString *backgroundPicURL;
@property (retain, nonatomic) NSString *musicURL;
@property (nonatomic) long long goodsCardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgVideoPlayURLJSONTransformer;
+ (id)bgVideoCoverURLJSONTransformer;
+ (id)goodsCardStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
