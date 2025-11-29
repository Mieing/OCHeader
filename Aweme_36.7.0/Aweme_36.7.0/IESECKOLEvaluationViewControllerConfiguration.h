@class NSString, NSDictionary;

@interface IESECKOLEvaluationViewControllerConfiguration : NSObject

@property (copy, nonatomic) NSString *productID;
@property (nonatomic, getter=isShopBinding) BOOL shopBinding;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *clickVideoID;
@property (copy, nonatomic) NSString *videoIDs;
@property (copy, nonatomic) NSString *detailVideoID;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL hideHeader;
@property (copy, nonatomic) NSString *kolLynxUrl;

- (void).cxx_destruct;
- (id)initWithProductID:(id)a0;

@end
