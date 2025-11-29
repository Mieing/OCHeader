@class NSString, NSMutableArray;

@interface FinderCommonReddotExpose : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *exposeList;
@property (retain, nonatomic) NSString *entranceTipsId;
@property (retain, nonatomic) NSMutableArray *waitForPrefetchList;

+ (void)initialize;

- (void)setWaitForPrefetchList:(id)a0;
- (id)waitForPrefetchList;
- (void)setEntranceTipsId:(id)a0;
- (id)entranceTipsId;
- (void)setExposeList:(id)a0;
- (id)exposeList;

@end
