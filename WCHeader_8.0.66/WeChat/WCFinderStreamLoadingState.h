@class NSString, NSMutableArray, NSData;
@protocol WCFinderStreamLoadingStateDelegate;

@interface WCFinderStreamLoadingState : NSObject

@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasFetched;
@property (retain, nonatomic) NSMutableArray *waitBlocks;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL isEmpty;
@property (weak, nonatomic) id<WCFinderStreamLoadingStateDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSData *nextBuff;
@property (retain, nonatomic) NSString *emptyNoDataTips;
@property (retain, nonatomic) NSString *noMoreTips;

+ (void)removeAllObserver:(id)a0;

- (void)configFooterView:(id)a0;
- (id)copy;
- (void)begin:(id /* block */)a0;
- (void)beginCancelSupport:(id /* block */)a0;
- (void)cancelRequest:(BOOL)a0;
- (void)onFailedWithMsg:(id)a0;
- (void)updateEmpty:(BOOL)a0;
- (void)onSuccess:(BOOL)a0 nextBuff:(id)a1;
- (void)onSuccess:(BOOL)a0 nextBuff:(id)a1 isEmpty:(BOOL)a2;
- (BOOL)enableFetchNextPage;
- (BOOL)addWaitLoadingBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
