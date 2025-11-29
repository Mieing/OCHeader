@class NSString, NSArray;

@interface WCFinderFeedSearchParams : NSObject

@property (retain, nonatomic) NSString *searchSessionID;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSArray *tagTexts;
@property (retain, nonatomic) NSString *queryText;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) int commentScene;
@property (nonatomic) int interactionScene;

- (void).cxx_destruct;

@end
