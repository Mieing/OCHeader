@class NSArray, NSString, NSDictionary, NSError, NSNumber, AWELiveCachePoolBusinessUseInfo;

@interface AWEFeedLiveRefreshParams : NSObject

@property (copy, nonatomic) NSArray *responseAwemeList;
@property (copy, nonatomic) NSArray *originAwemeList;
@property (copy, nonatomic) NSArray *closeAwemeList;
@property (copy, nonatomic) NSArray *availableAwemeList;
@property (copy, nonatomic) NSArray *closeRoomIds;
@property (copy, nonatomic) NSNumber *genTime;
@property (copy, nonatomic) NSString *replaceType;
@property (nonatomic) long long refreshType;
@property (nonatomic) long long requestIndex;
@property (copy, nonatomic) NSDictionary *filterResult;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWELiveCachePoolBusinessUseInfo *useInfo;

- (void).cxx_destruct;

@end
