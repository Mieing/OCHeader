@class NSArray, NSString, NSDictionary;

@interface AWESearchVideoFeedDetailContext : NSObject

@property (retain, nonatomic) id contextProvider;
@property (nonatomic) long long videoFeedIndex;
@property (copy, nonatomic) NSArray *videoFeedArray;
@property (retain, nonatomic) NSArray *idList;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ searchvideoWatchedMonitorBlock;

- (void).cxx_destruct;

@end
