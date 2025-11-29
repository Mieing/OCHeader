@interface WeChat.FTSRowModelContainer : NSObject <MMListDiffable>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ model;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ matchTip;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;

- (id)diffIdentifier;
- (id)initWithModel:(id)a0 matchTip:(id)a1 type:(unsigned long long)a2;
- (id)initWithContact:(id)a0 type:(unsigned long long)a1 isDetailSearch:(BOOL)a2;
- (id)initWithFeature:(id)a0 type:(unsigned long long)a1 isDetailSearch:(BOOL)a2 searchText:(id)a3;
- (id)initWithWeshop:(id)a0 type:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
