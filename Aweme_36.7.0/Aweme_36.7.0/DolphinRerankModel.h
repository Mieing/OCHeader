@class NSString, NSArray, NSObject;

@interface DolphinRerankModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *dolphinRerankId;
@property (nonatomic) long long op;
@property (retain, nonatomic) NSObject *opModel;
@property (retain, nonatomic) NSObject *originModel;
@property (retain, nonatomic) NSArray *oldIndexes;
@property (retain, nonatomic) NSArray *opIndexes;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
