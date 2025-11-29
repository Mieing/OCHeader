@class NSString;

@interface WCFinderGetTopicRecommendMusicCGIParams : NSObject

@property (nonatomic) unsigned long long topicId;
@property (copy, nonatomic) NSString *encryptedEventTopicId;
@property (copy, nonatomic) NSString *topicWording;
@property (nonatomic) int topicType;
@property (copy, nonatomic) NSString *fromObjectId;

- (void).cxx_destruct;

@end
