@class NSDictionary;

@interface AWEIMStreakPreFlameParentingDataModel : NSObject

@property (readonly, nonatomic) BOOL hasPreFlame;
@property (readonly, nonatomic) double expireTime;
@property (readonly, copy, nonatomic) NSDictionary *cardInfo;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
