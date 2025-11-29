@class NSString;

@interface RTVUICellModel : NSObject

@property (retain, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) id context;

- (id)initWithCellIdentifier:(id)a0 model:(id)a1 context:(id)a2;
- (BOOL)__simpleIsEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
