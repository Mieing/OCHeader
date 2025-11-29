@class NSString, WCFinderTopicShareItem;

@interface WCFinderClickShareCardEventReportData : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *sourceUser;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) WCFinderTopicShareItem *forwardItem;
@property (nonatomic) BOOL isHaveCover;
@property (nonatomic) BOOL isCGIEnd;
@property (nonatomic) long long sourceCommentScene;
@property (copy, nonatomic) NSString *collectionID;
@property (nonatomic) double shareSuccessTime;
@property (copy, nonatomic) NSString *messageId;

- (void).cxx_destruct;

@end
