@class NSString, NSArray;

@interface AWEShowMonetizeRefreshConfig : NSObject

@property (nonatomic) unsigned long long orderType;
@property (nonatomic) unsigned long long videoType;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSArray *awemeIDs;
@property (copy, nonatomic) NSString *orderID;
@property (nonatomic) double playProgress;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) unsigned long long refreshType;
@property (copy, nonatomic) NSArray *awemes;
@property (nonatomic) long long targetEpisode;
@property (copy, nonatomic) NSString *productID;

- (void).cxx_destruct;
- (id)init;

@end
