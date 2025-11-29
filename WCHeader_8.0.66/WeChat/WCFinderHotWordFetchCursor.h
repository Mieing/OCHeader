@class NSData, AnyPromise, WCFinderSearchHotWord, NSMutableArray;

@interface WCFinderHotWordFetchCursor : NSObject

@property (retain, nonatomic) AnyPromise *currentFetchPromise;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *objHotwordInfoBuffer;
@property (retain, nonatomic) WCFinderSearchHotWord *currentHotword;
@property (retain, nonatomic) NSMutableArray *hotWordList;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) WCFinderSearchHotWord *firstHotword;

- (id)initWithHotWordList:(id)a0 objHotwordInfoBuffer:(id)a1 lastBuffer:(id)a2;
- (id)nextHotWord;
- (id)takeOneHotwordFromStack;
- (void)requestNextPage;
- (BOOL)loading;
- (void).cxx_destruct;

@end
