@class NSMutableArray, MMFinderLiveFeedStreamBarrageConfig;

@interface MMFinderLiveFeedStreamBarrageLine : NSObject

@property (retain, nonatomic) MMFinderLiveFeedStreamBarrageConfig *config;
@property (nonatomic) double width;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL markAppendedItemCurRunLoop;

- (id)init;
- (BOOL)canAppendItem:(id)a0;
- (BOOL)tryAddItem:(id)a0;
- (void)unmarkAppendedItemCurRunLoop;
- (id)lastBarrageItem;
- (void)deleteItem:(id)a0;
- (void).cxx_destruct;

@end
