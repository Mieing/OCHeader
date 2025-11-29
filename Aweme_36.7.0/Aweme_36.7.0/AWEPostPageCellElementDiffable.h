@protocol NSObject;

@interface AWEPostPageCellElementDiffable : NSObject <IGListDiffable>

@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL needsUpdate;
@property (copy, nonatomic) id<NSObject> diffId;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithCellElement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
