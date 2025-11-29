@class NSMutableDictionary;

@interface TSPKEntryManager : NSObject

@property (copy, nonatomic) id /* block */ customCanHandleBuilder;
@property (retain, nonatomic) NSMutableDictionary *entries;
@property (retain, nonatomic) NSMutableDictionary *entryEnableDict;
@property (retain, nonatomic) NSMutableDictionary *apiModelDict;

+ (id)sharedManager;

- (id)didEnterEntry:(id)a0 withModel:(id)a1;
- (void)registerCustomCanHandleBuilder:(id /* block */)a0;
- (void)buildEntryModelToDict:(id)a0;
- (BOOL)canHandleEntry:(id)a0 withModel:(id)a1;
- (id)handleEnterEntry:(id)a0 withModel:(id)a1;
- (void)buildAPI:(id)a0 ofEntryModel:(id)a1 apiClass:(id)a2;
- (void)registerEntryType:(id)a0 entryModel:(id)a1;
- (void)setEntryType:(id)a0 enable:(BOOL)a1;
- (BOOL)respondToAPIKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
