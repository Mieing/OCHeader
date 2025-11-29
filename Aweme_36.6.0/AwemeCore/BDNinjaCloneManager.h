@class NSMutableArray, NSMutableDictionary;

@interface BDNinjaCloneManager : NSObject

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (retain, nonatomic) NSMutableDictionary *recordDict;

+ (id)sharedManager;

- (id)p_checkValidData:(id)a0;
- (void)registerCloneItem:(id)a0;
- (id)cloneDataWithIdentifiers:(id)a0;
- (id)cloneDataForOnline;
- (void)debugSetDescription:(id)a0 forIdentifier:(id)a1;
- (void)updateLocalData:(id)a0 URL:(id)a1;
- (void)requestTaskWithData:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)registerForCloneServiceWithURL:(id)a0 customConditionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
