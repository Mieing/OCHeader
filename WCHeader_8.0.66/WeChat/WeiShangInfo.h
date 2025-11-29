@class NSMutableArray;

@interface WeiShangInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *groups;
@property (retain, nonatomic) NSMutableArray *timelineIdx;

+ (void)initialize;

- (void)setTimelineIdx:(id)a0;
- (id)timelineIdx;
- (void)setGroups:(id)a0;
- (id)groups;

@end
