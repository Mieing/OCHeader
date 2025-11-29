@class NSMutableSet;

@interface WCFinderCellIdentifierBuidler : NSObject

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSMutableSet *existsIdents;

- (id)init;
- (id)createForObject:(id)a0;
- (id)createForObject:(id)a0 setter:(id /* block */)a1;
- (void)processIdentifier:(id)a0;
- (void).cxx_destruct;

@end
