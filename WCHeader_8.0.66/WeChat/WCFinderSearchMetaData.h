@class NSString;

@interface WCFinderSearchMetaData : NSObject

@property (nonatomic) int searchScene;
@property (copy, nonatomic) NSString *searchSessionId;
@property (nonatomic) int reportCommentScene;
@property (nonatomic) unsigned long long searchSourceType;
@property (nonatomic) unsigned long long reportSearchScene;
@property (nonatomic) long long tabId;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
