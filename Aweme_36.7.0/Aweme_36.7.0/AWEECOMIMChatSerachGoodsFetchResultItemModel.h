@class NSString;

@interface AWEECOMIMChatSerachGoodsFetchResultItemModel : NSObject

@property (copy, nonatomic) NSString *imgURL;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *messageId;

- (id)initWithDict:(id)a0 goodsInfoDict:(id)a1;
- (void).cxx_destruct;

@end
