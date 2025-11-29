@class NSString;

@interface AWEShareListDiffItem : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *dataSource;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
