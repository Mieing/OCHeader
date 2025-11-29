@class NSString;

@interface WCTopicReportBaseItem : NSObject

@property (nonatomic) unsigned long long actionTimeStamp;
@property (nonatomic) long long shareScene;
@property (copy, nonatomic) NSString *shareSceneId;
@property (nonatomic) long long shareCreateTime;
@property (nonatomic) long long enterSource;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) unsigned long long subType;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *docId;
@property (copy, nonatomic) NSString *queryKey;
@property (copy, nonatomic) NSString *talkerUsername;
@property (copy, nonatomic) NSString *senderUsername;

- (void).cxx_destruct;

@end
