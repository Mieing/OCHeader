@class NSString;

@interface RTVUISectionSupplementaryModel : NSObject

@property (readonly, copy, nonatomic) NSString *elementKind;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) id context;

- (id)initWithSupplementaryIdentifier:(id)a0 elmentKind:(id)a1 model:(id)a2 context:(id)a3;
- (void).cxx_destruct;

@end
