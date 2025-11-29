@class NSArray;

@interface WeChat.FTSNormalSectionData : WeChat.FTSSectionData {
    void /* unknown type, empty encoding */ rows;
}

@property (nonatomic, readonly) NSArray *rows;

- (id)initWithType:(unsigned long long)a0 contacts:(id)a1 isDetailSearch:(BOOL)a2 shouldDisplayCreate:(BOOL)a3;
- (id)initWithType:(unsigned long long)a0 rowModels:(id)a1;
- (id)initWithType:(unsigned long long)a0 contacts:(id)a1 isDetailSearch:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 features:(id)a1 isDetailSearch:(BOOL)a2 searchText:(id)a3;
- (id)initWithType:(unsigned long long)a0 favs:(id)a1 isDetailSearch:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 minimizeTasks:(id)a1 isDetailSearch:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 array:(id)a1 isDetailSearch:(BOOL)a2 searchText:(id)a3;
- (id)initWithType:(unsigned long long)a0 data:(id)a1 searchItemCount:(long long)a2;
- (void).cxx_destruct;

@end
