@class NSString, NSDictionary, NSArray;

@interface AWECommerceMultiStrategyModel : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *predictPrf;
@property (copy, nonatomic) NSDictionary *willPrf;
@property (copy, nonatomic) NSDictionary *didPrf;
@property (copy, nonatomic) NSArray *downgradeScenes;
@property (copy, nonatomic) NSDictionary *downgradeResult;

- (void).cxx_destruct;

@end
