@class NSDictionary, NSString;

@interface IESECKOLBuyerShowMergeViewControllerConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *kolLynxUrl;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic, getter=isShopBinding) BOOL shopBinding;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *clickVideoID;
@property (copy, nonatomic) NSString *videoIDs;
@property (copy, nonatomic) NSString *detailVideoID;
@property (nonatomic) BOOL hasKOLVC;
@property (nonatomic) BOOL hasBuyerShowVC;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;
- (id)initWithProductID:(id)a0;

@end
