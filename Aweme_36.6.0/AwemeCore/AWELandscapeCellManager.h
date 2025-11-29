@protocol AWELandscapeCellManagerProtocol;

@interface AWELandscapeCellManager : NSObject <AWELandscapeCellManagerProtocol> {
    void /* unknown type, empty encoding */ cellRegisterPool;
}

@property (class, nonatomic, readonly) id<AWELandscapeCellManagerProtocol> shared;

- (unsigned long long)getCellTypeWith:(id)a0;
- (BOOL)isLiveCell:(id)a0;
- (BOOL)isLongVideoCell:(id)a0;
- (void)registerCellClass:(Class)a0 forType:(unsigned long long)a1;
- (Class)cellClassForModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
