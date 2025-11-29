@class NSArray, NSSet;

@interface MJTimelineMutationInfo : NSObject {
    NSSet *_insertedIDs;
    NSSet *_deletedIDs;
    NSSet *_updatedIDs;
}

@property (readonly, nonatomic) NSArray *inserts;
@property (readonly, nonatomic) NSArray *deletes;
@property (readonly, nonatomic) NSArray *updates;
@property (readonly, nonatomic) unsigned long long mutationOptions;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)initWithInserts:(id)a0 deletes:(id)a1 updates:(id)a2 options:(unsigned long long)a3;
- (unsigned long long)changeCount;
- (BOOL)affectSegmentWithID:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
