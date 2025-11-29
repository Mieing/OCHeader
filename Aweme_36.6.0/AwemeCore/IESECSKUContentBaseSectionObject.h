@class NSString;

@interface IESECSKUContentBaseSectionObject : NSObject <IGListDiffable>

@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) id model;

+ (id)objectWithModelClass:(Class)a0 model:(id)a1;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithSectionIdentifier:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
