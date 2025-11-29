@class NSString, NSArray, NSDictionary, IESECGoodsFeedImmersiveResponseModel;

@interface IESECGoodsFeedImmersiveShowConfig : NSObject <IESECGoodsFeedImmersiveShowConfigProtocol>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *targetPromotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *popType;
@property (copy, nonatomic) NSArray *promotionIDs;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *aggParams;
@property (copy, nonatomic) NSDictionary *AdAggParams;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) IESECGoodsFeedImmersiveResponseModel *firstCardResponseModel;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
