@class AWELiveSubscribeMemberMark, NSString, NSArray, NSDictionary, AWELivePriceInfo, NSNumber, AWEURLModel;

@interface AWELiveTicketModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *releaseTime;
@property (copy, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) NSString *ticketPanelJumpURL;
@property (copy, nonatomic) NSString *ticketPanelSixJumpURL;
@property (copy, nonatomic) NSString *prepayCashierJumpURL;
@property (retain, nonatomic) NSNumber *ticketID;
@property (retain, nonatomic) NSNumber *ticketCategory;
@property (copy, nonatomic) NSString *ticketCategoryStr;
@property (retain, nonatomic) AWEURLModel *ticketCoverURL;
@property (copy, nonatomic) NSDictionary *priceInfo;
@property (copy, nonatomic) AWELivePriceInfo *finalPriceInfo;
@property (copy, nonatomic) NSArray *skuDetails;
@property (retain, nonatomic) AWELiveSubscribeMemberMark *subscribeMemberMark;

+ (id)ticketCoverURLJSONTransformer;
+ (id)skuDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
