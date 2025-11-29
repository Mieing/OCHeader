@class NSArray;

@interface MMFinderFeedStreamSatisfactionQuest : NSObject

@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL fetchSuccess;
@property (retain, nonatomic) NSArray *quests;
@property (retain, nonatomic) NSArray *reasons;

+ (id)successWithQuest:(id)a0 reasons:(id)a1;
+ (id)failure;
+ (id)fetching;

- (void).cxx_destruct;

@end
