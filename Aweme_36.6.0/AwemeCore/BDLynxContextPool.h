@class NSMutableDictionary, NSMutableArray;

@interface BDLynxContextPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedPipers;
@property (retain, nonatomic) NSMutableArray *cardPool;
@property (retain, nonatomic) NSMutableArray *cardsInUse;

+ (id)sharedInstance;

- (id)cardWithSchema:(id)a0;
- (void)addLynxContext:(id)a0 schema:(id)a1;
- (BOOL)contextExistsWithSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeContext:(id)a0;

@end
