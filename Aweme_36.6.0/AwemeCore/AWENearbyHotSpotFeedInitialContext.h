@class NSString, NSDictionary;

@interface AWENearbyHotSpotFeedInitialContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *initialAwemeID;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) unsigned long long bizType;

- (void).cxx_destruct;

@end
