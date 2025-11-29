@class MMListenDiscoverLine, NSString, NSMutableArray, MMListenFeedMixedListResponse;

@interface AudioRadioSectionData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSMutableArray *allMixFeedItems;
@property (retain, nonatomic) MMListenFeedMixedListResponse *lastResponse;
@property (retain, nonatomic) MMListenDiscoverLine *line;
@property (nonatomic) int tabIndex;
@property (nonatomic) int retainedNum;

+ (void)initialize;

@end
