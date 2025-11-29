@class NSString, NSDictionary, NSArray, NSNumber;

@interface IESECMatchPurchaseRequest : NSObject

@property (retain, nonatomic) NSDictionary *originParams;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *combinationIDs;
@property (copy, nonatomic) NSArray *combinationIDArr;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *KOLID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *previousSourcePage;
@property (copy, nonatomic) NSDictionary *metaParamsDict;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSDictionary *entranceInfoDict;
@property (copy, nonatomic) NSString *promotions;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL isPicMatching;
@property (copy, nonatomic) NSString *requestAdditions;
@property (copy, nonatomic) NSDictionary *requestAdditionsDict;
@property (copy, nonatomic) NSString *trackAdditions;
@property (copy, nonatomic) NSDictionary *trackAdditionsDict;
@property (nonatomic) unsigned long long enterType;
@property (copy, nonatomic) NSNumber *heightPercent;
@property (nonatomic) BOOL isFromLive;

- (void)parseParams;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
