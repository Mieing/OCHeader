@class NSString, NSDictionary;

@interface IESECTrendGoodsContext : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long entranceFrom;
@property (nonatomic) BOOL isUseNewProductCardStyle;
@property (retain, nonatomic) NSDictionary *entranceInfo;

- (void).cxx_destruct;

@end
