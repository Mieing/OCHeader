@class NSArray, NSDictionary;

@interface AWENearbyGrouponRefreshV2Config : NSObject

@property (copy, nonatomic) NSArray *refreshType;
@property (nonatomic) long long pullType;
@property (copy, nonatomic) NSArray *cardTypeList;
@property (copy, nonatomic) NSArray *resourceTypeList;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSDictionary *refreshParams;
@property (copy, nonatomic) NSArray *currentTabIds;
@property (nonatomic) unsigned long long refreshScene;

- (id)defaultRefreshTypeByPullType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
