@class NSString;

@interface IESECGoodsOpenURL : NSObject

@property (nonatomic) long long promotionSource;
@property (copy, nonatomic) NSString *ironManURL;
@property (copy, nonatomic) NSString *AppURL;
@property (copy, nonatomic) NSString *universalLinks;
@property (copy, nonatomic) NSString *webURL;

- (id)initWithLinks:(id)a0 promotionSource:(long long)a1;
- (void).cxx_destruct;

@end
