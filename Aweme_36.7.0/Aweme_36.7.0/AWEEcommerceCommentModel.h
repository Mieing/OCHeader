@class NSString, NSArray;

@interface AWEEcommerceCommentModel : NSObject

@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *productTitle;
@property (nonatomic) long long starCount;
@property (copy, nonatomic) NSString *productPrice;
@property (copy, nonatomic) NSString *productSales;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSArray *topicArray;

- (void).cxx_destruct;
- (id)priceText;

@end
