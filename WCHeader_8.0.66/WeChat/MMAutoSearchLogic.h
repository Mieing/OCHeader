@class NSString, NSMutableArray;
@protocol MMAutoSearchLogicDelegate;

@interface MMAutoSearchLogic : MMObject

@property (retain, nonatomic) NSMutableArray *autoSearchQueue;
@property (nonatomic) BOOL blockSignal;
@property (retain, nonatomic) NSString *lastResponseKey;
@property (weak, nonatomic) id<MMAutoSearchLogicDelegate> delegate;

- (id)init;
- (void)reset;
- (void)tryAutoSearchWithKeyword:(id)a0 StartFromFirst:(BOOL)a1;
- (BOOL)autoSearchShouldFinishedWithKeyword:(id)a0 QueryInterval:(double)a1 StartFromFirst:(BOOL)a2 RequestNext:(BOOL)a3;
- (void)tryNextSearch;
- (void).cxx_destruct;

@end
