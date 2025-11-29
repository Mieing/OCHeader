@class NSString;

@interface SolitaireOperation : NSOperation

@property (retain, nonatomic) NSString *nsContent;
@property (copy, nonatomic) id /* block */ finishBlock;

- (id)initWithContent:(id)a0 FinishBlock:(id /* block */)a1;
- (void)main;
- (BOOL)isHasOccupyKeyword:(id)a0;
- (void).cxx_destruct;

@end
