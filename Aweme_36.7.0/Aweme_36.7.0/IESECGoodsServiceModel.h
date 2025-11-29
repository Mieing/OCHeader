@class NSString, UIImage;

@interface IESECGoodsServiceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *detailURL;
@property (copy, nonatomic) NSString *smallIconURL;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) UIImage *smallIconImage;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subtitleTextColor;
@property (nonatomic) BOOL isShowOnTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
