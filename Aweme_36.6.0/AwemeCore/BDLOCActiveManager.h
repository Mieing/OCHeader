@class BDLOCStorage;

@interface BDLOCActiveManager : NSObject

@property (retain, nonatomic) BDLOCStorage *storage;

- (BOOL)isPkgActive:(id)a0;
- (void)activePkg:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end
