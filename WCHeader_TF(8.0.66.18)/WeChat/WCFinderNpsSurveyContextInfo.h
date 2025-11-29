@class NSString;

@interface WCFinderNpsSurveyContextInfo : NSObject

@property (nonatomic) int pageScene;
@property (nonatomic) unsigned long long enterIndexInFeedStream;
@property (nonatomic) unsigned long long currentIndexInFeedStream;
@property (copy, nonatomic) NSString *contentTid;
@property (nonatomic) unsigned long long contentMediaType;
@property (nonatomic) unsigned long long relativeIndex;

- (void).cxx_destruct;

@end
