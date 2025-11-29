@class NSString, NSMutableArray;

@interface WCFinderMentionSearchSection : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long moreState;
@property (nonatomic) unsigned long long mentionType;
@property (retain, nonatomic) NSString *showMoreWording;

- (id)init;
- (void)reset;
- (long long)displayMoreState;
- (BOOL)hasMore;
- (void).cxx_destruct;

@end
