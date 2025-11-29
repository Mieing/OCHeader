@class NSString, NSArray, NSData, FinderLiveGetPaymentItemsResponse_Product, NSMutableArray;

@interface MMFinderLivePrepayTierViewModel : NSObject

@property (retain, nonatomic) FinderLiveGetPaymentItemsResponse_Product *paymentItem;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long pricing;
@property (nonatomic) BOOL isPaid;
@property (retain, nonatomic) NSArray *benefits;
@property (retain, nonatomic) NSString *buttonLabel;
@property (retain, nonatomic) NSString *backgroundImgUrl;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSData *productExtInfo;
@property (retain, nonatomic) NSMutableArray *textColorValue;
@property (readonly, nonatomic) BOOL isFree;
@property (readonly, nonatomic) unsigned int productId;
@property (readonly, nonatomic) unsigned int rewardType;
@property (readonly, nonatomic) NSData *rewardExtInfo;

- (id)initWithPaymentItem:(id)a0;
- (void).cxx_destruct;

@end
