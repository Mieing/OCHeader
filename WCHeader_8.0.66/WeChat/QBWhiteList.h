@class NSString, NSMutableArray, NSMutableDictionary;

@interface QBWhiteList : NSObject {
    NSMutableArray *_whiteList;
    NSMutableArray *_predicateList;
    NSMutableDictionary *_whiteListDic;
    NSString *_fileName;
    unsigned long long _FixedWhiteListCount;
}

- (void)doInit;
- (id)initWithFileName:(id)a0;
- (void)loadDataFromFile;
- (id)init;
- (BOOL)addHost:(id)a0;
- (void)setWhiteList:(id)a0;
- (void)setWhiteList:(id)a0 cached:(BOOL)a1;
- (BOOL)isInWhiteListWithURL:(id)a0;
- (BOOL)isInWhiteListWithHost:(id)a0;
- (void)removeAllObjects;
- (void)removeTempObjects;
- (void).cxx_destruct;

@end
