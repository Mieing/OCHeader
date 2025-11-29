@class NSString;

@interface MagicLiveCardFrameSetExtParams : NSObject

@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *commentScene;
@property (retain, nonatomic) NSString *enterImmerseType;
@property (retain, nonatomic) NSString *promotionRecommendInfo;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *gameClientParams;

- (id)toQueryString;
- (id)description;
- (void).cxx_destruct;

@end
