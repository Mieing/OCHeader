@class NSString, NSUUID;

@interface RxCollectionLayoutSupplementaryEnrollment : NSObject

@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSUUID *enrollmentIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKind:(id)a0;

@end
