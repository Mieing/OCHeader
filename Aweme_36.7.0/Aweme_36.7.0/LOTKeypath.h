@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray;

@interface LOTKeypath : NSObject {
    long long _currentDepth;
    NSMutableArray *_fuzzyDepthStack;
    NSMutableArray *_currentStack;
    NSArray *_keys;
    NSMutableDictionary *_searchResults;
}

@property (readonly, nonatomic) NSString *absoluteKeypath;
@property (readonly, nonatomic) NSString *currentKey;
@property (readonly, nonatomic) NSString *currentKeyPath;
@property (readonly, nonatomic) NSDictionary *searchResults;
@property (readonly, nonatomic) BOOL hasFuzzyWildcard;
@property (readonly, nonatomic) BOOL hasWildcard;
@property (readonly, nonatomic) BOOL endOfKeypath;

+ (id)keypathWithString:(id)a0;
+ (id)keypathWithKeys:(id)a0;

- (BOOL)pushKey:(id)a0;
- (void)addSearchResultForCurrentPath:(id)a0;
- (void)popKey;
- (void)popToRootKey;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0;

@end
