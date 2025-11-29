@class NSString, NSArray;

@interface AWENearbyTaskFeedPartialRefreshModel : NSObject

@property (copy, nonatomic) NSString *triggerEvent;
@property (nonatomic) long long feedTabID;
@property (copy, nonatomic) NSArray *feedUpdateReqList;
@property (copy, nonatomic) NSArray *originDataList;

- (void).cxx_destruct;

@end
