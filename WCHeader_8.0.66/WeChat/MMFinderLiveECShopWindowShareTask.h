@class NSString, WCFinderLiveShopWindowShareItem;

@interface MMFinderLiveECShopWindowShareTask : MMFinderLiveECBaseShareTask

@property (nonatomic) BOOL useShopWindowCardV2;
@property (copy, nonatomic) NSString *liteAppID;
@property (copy, nonatomic) NSString *liteAppPath;
@property (copy, nonatomic) NSString *liteAppQuery;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) WCFinderLiveShopWindowShareItem *shopWindowShareItem;

- (id)init;
- (void).cxx_destruct;

@end
