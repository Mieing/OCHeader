@class NSArray, NSString;

@interface LVRelationship : NSObject {
    struct shared_ptr<CutSame::RelationShip> { struct RelationShip *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSArray *idToID;
@property (copy, nonatomic) NSString *type;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::RelationShip> { struct RelationShip *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::RelationShip> { struct RelationShip *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::RelationShip> { struct RelationShip *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
