@class BDPUniqueID, NSMutableArray;

@interface BDPDelayOperationQueue : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableArray *subThreadOperationList;
@property (retain, nonatomic) NSMutableArray *mainThreadOperationList;

- (id)initWithUniqueId:(id)a0;
- (void)recordOperationBeforeLCP:(id /* block */)a0 isMain:(BOOL)a1;
- (void)fireAllOperation;
- (void).cxx_destruct;

@end
