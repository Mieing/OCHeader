@class NSString;

@interface AWEMusicCommerceProductModel : NSObject

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *outOrderNo;
@property (retain, nonatomic) NSString *tradeNo;
@property (nonatomic) long long resultType;

- (id)initWithProductID:(id)a0 outOrderNo:(id)a1 tradeNo:(id)a2 resultType:(long long)a3;
- (void).cxx_destruct;

@end
