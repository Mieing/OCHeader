@class NSString;

@interface IESECLivePublicScreenGoodsCardModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleIcon;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *productID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
