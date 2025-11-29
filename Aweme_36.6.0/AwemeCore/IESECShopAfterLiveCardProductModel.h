@class NSString, NSArray;

@interface IESECShopAfterLiveCardProductModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) long long price;
@property (nonatomic) long long marketPrice;

- (void).cxx_destruct;

@end
