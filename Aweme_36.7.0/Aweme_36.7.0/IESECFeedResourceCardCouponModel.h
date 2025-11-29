@class IESECFeedResourceCardCouponLinkInfoModel, NSString, IESECURLModel, IESECFeedResourceCardCouponTimeInfoModel;

@interface IESECFeedResourceCardCouponModel : IESECFeedResourceCardBaseNode

@property (nonatomic) unsigned long long style;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *subDesc;
@property (copy, nonatomic) NSString *couponID;
@property (retain, nonatomic) IESECFeedResourceCardCouponLinkInfoModel *link;
@property (retain, nonatomic) IESECFeedResourceCardCouponTimeInfoModel *timeInfo;
@property (retain, nonatomic) IESECURLModel *backgroundImage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
