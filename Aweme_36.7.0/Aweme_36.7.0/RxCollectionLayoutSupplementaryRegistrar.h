@class NSMutableDictionary, NSSet, NSMutableOrderedSet, NSMutableSet, NSString;

@interface RxCollectionLayoutSupplementaryRegistrar : NSObject <RxCollectionLayoutSupplementaryEnrolling>

@property (readonly, nonatomic) NSMutableDictionary *kindEnrollmentsDict;
@property (readonly, nonatomic) NSMutableDictionary *enrollmentsDict;
@property (readonly, nonatomic) NSMutableSet *uncommittedEnrollmentIdentifiers;
@property (readonly, nonatomic) NSMutableOrderedSet *enrollmentIdentifiers;
@property (readonly, nonatomic) NSSet *kinds;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addEnrollmentToKindDict:(id)a0;
- (void)__removeEnrollmentWithIdentifier:(id)a0;
- (void)pruneUncommitedEnrollments;
- (void).cxx_destruct;
- (id)init;
- (id)enrollSupplementaryForKind:(id)a0;
- (long long)countForKind:(id)a0;
- (unsigned long long)kindIndexForEnrollmentIdentifier:(id)a0;
- (void)unenrollAllAfterAndIncludingEnrollment:(id)a0;
- (void)unenrollAllAfterEnrollment:(id)a0;
- (void)commitEnrollment:(id)a0;

@end
