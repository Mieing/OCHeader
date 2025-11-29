@class IESECGoodsDetailAuthorShopBindAuthorModel, IESECURLModel, NSString, IESECHeadVideoModel;

@interface IESECGoodsDetailGoodsVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *author;
@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (retain, nonatomic) IESECURLModel *videoCover;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *likedCount;
@property (copy, nonatomic) NSString *commentCount;
@property (copy, nonatomic) NSString *openLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
