@class NSError, NSArray, NSString;

@interface ACCDraftResourceRecoverTask : NSObject <ACCDraftResourceRecoverTask>

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL updated;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithDraft:(id)a0 repository:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)addDependency:(id)a0;
- (id)updatedValue;
- (void)setUpdatedValue:(id)a0;
- (id)statusValue;
- (void)setStatusValue:(id)a0;

@end
