@class NSString, IESECURLModel;

@interface IESECGoodsDetailCouponElement : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long elementType;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long blankWidth;
@property (nonatomic) long long endTime;
@property (nonatomic) long long currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarJSONTransformer;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
