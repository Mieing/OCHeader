@class NSArray, NSDictionary;

@interface AWEFeedEcomQueryCardTriggerRefreshConfig : NSObject

@property (retain, nonatomic) NSArray *metas;
@property (retain, nonatomic) NSDictionary *params;

+ (id)configWithParams:(id)a0;

- (id)paramMatched:(long long)a0;
- (void).cxx_destruct;

@end
