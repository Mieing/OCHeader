@class WCTopicWCFeedItem, NSString;

@interface WCTopicWCFeedReportInputItem : NSObject

@property (nonatomic) long long actionScene;
@property (nonatomic) long long enterSource;
@property (nonatomic) unsigned long long actionTimeStamp;
@property (retain, nonatomic) WCTopicWCFeedItem *feedItem;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *queryKey;

- (void).cxx_destruct;

@end
