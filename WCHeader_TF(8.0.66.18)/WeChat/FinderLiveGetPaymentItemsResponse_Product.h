@class NSString, NSMutableArray, NSData;

@interface FinderLiveGetPaymentItemsResponse_Product : WXPBGeneratedMessage

@property (nonatomic) unsigned int productId;
@property (nonatomic) unsigned int price;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *rightsWording;
@property (nonatomic) unsigned int hasPaid;
@property (nonatomic) unsigned int show;
@property (nonatomic) unsigned int rewardType;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *backgroundImgUrl;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSData *productExtInfo;

+ (void)initialize;

@end
