@class NSDictionary;

@interface AWEStory25ListObserveResponse : AWESocialRelationResponse

@property (nonatomic) BOOL isFullUpdate;
@property (nonatomic) BOOL fromSync;
@property (copy, nonatomic) NSDictionary *storyListDictionary;

- (void).cxx_destruct;

@end
