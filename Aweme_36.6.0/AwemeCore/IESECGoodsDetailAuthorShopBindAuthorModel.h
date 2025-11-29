@class NSNumber, NSString, IESECURLModel;

@interface IESECGoodsDetailAuthorShopBindAuthorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *authorID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (copy, nonatomic) NSString *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
