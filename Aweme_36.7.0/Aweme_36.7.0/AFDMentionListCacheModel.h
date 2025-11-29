@class NSArray, NSNumber;

@interface AFDMentionListCacheModel : NSObject <AFDMentionListCacheModelProtocol> {
    void /* function */ mentionList;
    void /* function */ recentMentionList;
}

@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSArray *mentionList;
@property (nonatomic, copy) NSArray *recentMentionList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, retain) NSNumber *cursor;

- (BOOL)isExpiredWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
