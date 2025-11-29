@class NSDictionary, NSString;

@interface AnnieLiveBizHandler : NSObject <AnnieLiveBizServiceProtocol>

@property (copy, nonatomic) NSDictionary *puzzleContextHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)createService;
+ (BOOL)canOpenAnnieCard:(id)a0 bid:(id)a1 isAnnieX:(BOOL)a2;
+ (BOOL)canOpenAnnieXCardURLString:(id)a0 bid:(id)a1;

- (BOOL)canOpenAnnieURLString:(id)a0;
- (id)createAnnieContainer:(id)a0 originalContext:(id)a1;
- (id)openAnnieContainerIfNeed:(id)a0 originalContext:(id)a1 completion:(id /* block */)a2;
- (id)fetchPuzzleContextWithKey:(id)a0;
- (id)fetchPuzzleContextWithContainer:(id)a0;
- (void)removePuzzleContextWithKey:(id)a0;
- (id)innerCreateAnniContainer:(id)a0 originalContext:(id)a1;
- (id)setPuzzleContextWithSchema:(id)a0 originalContext:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
